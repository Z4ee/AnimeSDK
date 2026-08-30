#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS100_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB246720)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS100_0__ONMESSAGERESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0xB248680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass100_0_TypeDefinitionIndex = 46780;

	class MiHoYoSDKServer___c__DisplayClass100_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::MiHoYo::SDK::SecurityTunnel_Packet* packet; // 0x18
		::System::Boolean isSuccess; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS100_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMessageResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS100_0__ONMESSAGERESPONSE_B__0_OFFSET))(this);
		}
	};
}
