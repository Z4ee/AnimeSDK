#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DCA8F0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x8DCB2C0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__1_OFFSET UNITYSDK_OFFSET(0x8DCB2D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ThreadUtil___c__DisplayClass3_0_TypeDefinitionIndex = 43022;

	class SecurityTunnel_ThreadUtil___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Threading::WaitCallback* callBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Enqueue_b__0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__0_OFFSET))(this, state);
		}

		::System::Void _Enqueue_b__1(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__1_OFFSET))(this, state);
		}
	};
}
