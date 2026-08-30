#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RPGAnimationEvent_AnimationEventCallBack; }

#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC50C0)
#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0___INVOKECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xDDC53C0)
#define RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0___INVOKECALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0xDDC53F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGAnimationEvent___c__DisplayClass11_0_TypeDefinitionIndex = 72777;

	class RPGAnimationEvent___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent_AnimationEventCallBack* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void __InvokeCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0___INVOKECALLBACK_B__0_OFFSET))(this);
		}

		::System::Void __InvokeCallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGANIMATIONEVENT___C__DISPLAYCLASS11_0___INVOKECALLBACK_B__1_OFFSET))(this);
		}
	};
}
