#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAE0C0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS22_0__SAFECONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x1ABBCB50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass22_0_TypeDefinitionIndex = 44691;

	class SecurityTunnel___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_ServerAddress address; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SafeConnect_b__1(::MiHoYo::SDK::SecurityTunnel_ServerAddress a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ServerAddress))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS22_0__SAFECONNECT_B__1_OFFSET))(this, a1);
		}
	};
}
