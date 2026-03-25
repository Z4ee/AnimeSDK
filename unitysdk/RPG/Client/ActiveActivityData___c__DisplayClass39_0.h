#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8ECFBE0)
#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__USEACTIVEITEMWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x8ECFC10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityData___c__DisplayClass39_0_TypeDefinitionIndex = 49781;

	class ActiveActivityData___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _UseActiveItemWithCallback_b__0(::System::UInt16 _, ::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__USEACTIVEITEMWITHCALLBACK_B__0_OFFSET))(this, _, _);
		}
	};
}
