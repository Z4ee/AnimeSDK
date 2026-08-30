#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A6110)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS66_0__PING_B__1_OFFSET UNITYSDK_OFFSET(0xB2A75E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass66_0_TypeDefinitionIndex = 46887;

	class SecurityTunnel___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_Packet* ping; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Void _Ping_b__1(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS66_0__PING_B__1_OFFSET))(this, a1, a2);
		}
	};
}
