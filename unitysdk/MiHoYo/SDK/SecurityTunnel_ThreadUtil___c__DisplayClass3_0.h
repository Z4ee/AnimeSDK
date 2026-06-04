#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA216530)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0xA216EE0)
#define MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__1_OFFSET UNITYSDK_OFFSET(0xA216F00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_ThreadUtil___c__DisplayClass3_0_TypeDefinitionIndex = 43825;

	class SecurityTunnel_ThreadUtil___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Threading::WaitCallback* callBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Enqueue_b__0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__0_OFFSET))(this, a1);
		}

		::System::Void _Enqueue_b__1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_THREADUTIL___C__DISPLAYCLASS3_0__ENQUEUE_B__1_OFFSET))(this, a1);
		}
	};
}
