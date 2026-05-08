#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A881BA0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS58_0__TRYWRITE_B__0_OFFSET UNITYSDK_OFFSET(0x1A881BB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass58_0_TypeDefinitionIndex = 35249;

	class SecurityTunnel___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryWrite_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS58_0__TRYWRITE_B__0_OFFSET))(this);
		}
	};
}
