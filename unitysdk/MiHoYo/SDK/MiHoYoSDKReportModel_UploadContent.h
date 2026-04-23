#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKReportModel_DeviceInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKReportModel_LogInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKReportModel_UserInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKReportModel_VersionInfo; }

#define MIHOYO_SDK_MIHOYOSDKREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8D50FA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKReportModel_UploadContent_TypeDefinitionIndex = 42963;

	class MiHoYoSDKReportModel_UploadContent : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKReportModel_DeviceInfo* deviceInfo; // 0x10
		::MiHoYo::SDK::MiHoYoSDKReportModel_UserInfo* userInfo; // 0x18
		::MiHoYo::SDK::MiHoYoSDKReportModel_VersionInfo* versionInfo; // 0x20
		::MiHoYo::SDK::MiHoYoSDKReportModel_LogInfo* logInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
