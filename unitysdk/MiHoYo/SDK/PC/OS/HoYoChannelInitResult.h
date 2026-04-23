#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class SteamInitExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINITRESULT_TOJSON_OFFSET UNITYSDK_OFFSET(0x175A8390)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINITRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x175AECC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInitResult_TypeDefinitionIndex = 7551;

	class HoYoChannelInitResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		// static const ::System::Int32 CHANNEL_SHUTDOWN_REQUIRED = 0xFFFFFC17; // 0x0
		// static const ::System::Int32 CHANNEL_NO_CLIENT = 0xFFFFFC16; // 0x0
		// static const ::System::Int32 CHANNEL_VERSION_MISMATCH = 0xFFFFFC15; // 0x0
		// static const ::System::Int32 CHANNEL_UPDATE_REQUIRED = 0xFFFFFC14; // 0x0
		::MiHoYo::SDK::PC::OS::SteamInitExtension* steam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINITRESULT__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINITRESULT_TOJSON_OFFSET))(this);
		}
	};
}
