#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_ThreadUtil___c__DisplayClass3_0; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2170A0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_1__ENQUEUE_B__2_OFFSET UNITYSDK_OFFSET(0xA2170B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ThreadUtil___c__DisplayClass3_1_TypeDefinitionIndex = 43826;

	class SecurityTunnel_ThreadUtil___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* state; // 0x10
		::MiHoYo::SDK::SecurityTunnel_ThreadUtil___c__DisplayClass3_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _Enqueue_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_1__ENQUEUE_B__2_OFFSET))(this);
		}
	};
}
