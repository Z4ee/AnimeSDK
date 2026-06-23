#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKGameReportModel_DeviceInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKGameReportModel_LogInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKGameReportModel_UserInfo; }
namespace MiHoYo::SDK { class MiHoYoSDKGameReportModel_VersionInfo; }

#define MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A7750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKGameReportModel_UploadContent_TypeDefinitionIndex = 36727;

	class MiHoYoSDKGameReportModel_UploadContent : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKGameReportModel_DeviceInfo* device_info; // 0x10
		::MiHoYo::SDK::MiHoYoSDKGameReportModel_UserInfo* user_info; // 0x18
		::MiHoYo::SDK::MiHoYoSDKGameReportModel_VersionInfo* version_info; // 0x20
		::MiHoYo::SDK::MiHoYoSDKGameReportModel_LogInfo* log_info; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGAMEREPORTMODEL_UPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
