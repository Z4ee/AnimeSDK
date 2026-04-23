#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class DeviceInfo; }
namespace MiHoYo::SDK { class LogInfo; }
namespace MiHoYo::SDK { class UserInfo; }
namespace MiHoYo::SDK { class VersionInfo; }
namespace System { class String; }

#define MIHOYO_SDK_UPLOADCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17688DE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UploadContent_TypeDefinitionIndex = 6918;

	class UploadContent : public ::System::Object
	{
	public:
		::System::String* launchTraceId; // 0x10
		::MiHoYo::SDK::DeviceInfo* device_info; // 0x18
		::MiHoYo::SDK::UserInfo* user_info; // 0x20
		::MiHoYo::SDK::VersionInfo* version_info; // 0x28
		::MiHoYo::SDK::LogInfo* log_info; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UPLOADCONTENT__CTOR_OFFSET))(this);
		}
	};
}
