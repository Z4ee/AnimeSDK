#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB081860)
#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__USEACTIVEITEMWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xB081890)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityData___c__DisplayClass39_0_TypeDefinitionIndex = 57380;

	class ActiveActivityData___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _UseActiveItemWithCallback_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS39_0__USEACTIVEITEMWITHCALLBACK_B__0_OFFSET))(this, a1, a2);
		}
	};
}
