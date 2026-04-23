#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB42F0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__TRYCONNECT_B__0_OFFSET UNITYSDK_OFFSET(0x8DC4460)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__TRYCONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x8DC4590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass20_0_TypeDefinitionIndex = 43024;

	class SecurityTunnel___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x10
		::MiHoYo::SDK::SecurityTunnel_AuthInfo info; // 0x18
		::Il2CppArray<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* addresses; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryConnect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__TRYCONNECT_B__0_OFFSET))(this);
		}

		::System::Void _TryConnect_b__1(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS20_0__TRYCONNECT_B__1_OFFSET))(this, _);
		}
	};
}
