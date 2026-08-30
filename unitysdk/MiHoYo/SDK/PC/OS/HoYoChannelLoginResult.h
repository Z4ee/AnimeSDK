#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class SteamLoginExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxLoginExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF5F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x1ABCF5E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCF630)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelLoginResult_TypeDefinitionIndex = 8535;

	class HoYoChannelLoginResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		// static const ::System::Int32 CHANNEL_USER_NOT_SIGNED_IN = 0xFFFFF82F; // 0x0
		// static const ::System::Int32 CHANNEL_USER_ACTION_REQUIRED = 0xFFFFF82E; // 0x0
		::System::Boolean authenticated; // 0x30
		::MiHoYo::SDK::PC::OS::SteamLoginExtension* steam; // 0x38
		::MiHoYo::SDK::PC::OS::XboxLoginExtension* xbox; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_TOJSON_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult* FromJson(::System::String* a1)
		{
			return ((::MiHoYo::SDK::PC::OS::HoYoChannelLoginResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELLOGINRESULT_FROMJSON_OFFSET))(a1);
		}
	};
}
