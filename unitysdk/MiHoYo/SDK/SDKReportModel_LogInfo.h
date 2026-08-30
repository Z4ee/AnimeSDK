#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL_LOGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B0CC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_LogInfo_TypeDefinitionIndex = 7895;

	class SDKReportModel_LogInfo : public ::System::Object
	{
	public:
		::System::String* logTime; // 0x10
		::System::Int32 actionId; // 0x18
		::System::String* actionName; // 0x20
		::System::String* cBody; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL_LOGINFO__CTOR_OFFSET))(this);
		}
	};
}
