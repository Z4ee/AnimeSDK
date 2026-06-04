#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SDKReportModel_DeviceInfo; }
namespace MiHoYo::SDK { class SDKReportModel_LogInfo; }
namespace MiHoYo::SDK { class SDKReportModel_UserInfo; }
namespace MiHoYo::SDK { class SDKReportModel_VersionInfo; }
namespace System { class String; }

#define MIHOYO_SDK_SDKREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18425440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReportModel_UploadContent_TypeDefinitionIndex = 7882;

	class SDKReportModel_UploadContent : public ::System::Object
	{
	public:
		::System::String* eventTimeMs; // 0x10
		::System::String* launchTraceId; // 0x18
		::MiHoYo::SDK::SDKReportModel_DeviceInfo* deviceInfo; // 0x20
		::MiHoYo::SDK::SDKReportModel_UserInfo* userInfo; // 0x28
		::MiHoYo::SDK::SDKReportModel_VersionInfo* versionInfo; // 0x30
		::MiHoYo::SDK::SDKReportModel_LogInfo* logInfo; // 0x38
		::System::String* logInfoJsonString; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
