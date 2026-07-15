#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABB0850)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS31_0__EXCHANGESECRETKEY_B__0_OFFSET UNITYSDK_OFFSET(0x1ABBCC10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass31_0_TypeDefinitionIndex = 44692;

	class SecurityTunnel___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x10
		::MiHoYo::SDK::SecurityTunnel_AuthInfo info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExchangeSecretKey_b__0(::System::Boolean a1, ::MiHoYo::SDK::SecurityTunnel_Packet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS31_0__EXCHANGESECRETKEY_B__0_OFFSET))(this, a1, a2);
		}
	};
}
