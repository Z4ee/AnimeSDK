#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SDKReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SDKReportModel_UploadContent; }
namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACD240)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_TypeDefinitionIndex = 7890;

	class SDKReportModel : public ::System::Object
	{
	public:
		::System::Int32 applicationId; // 0x10
		::System::String* applicationName; // 0x18
		::System::String* msgId; // 0x20
		::System::String* eventTime; // 0x28
		::System::Int32 eventId; // 0x30
		::System::String* eventName; // 0x38
		::MiHoYo::SDK::SDKReportModel_UploadContent* uploadContent; // 0x40
		::MiHoYo::SDK::SDKReportType reportType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL__CTOR_OFFSET))(this);
		}
	};
}
