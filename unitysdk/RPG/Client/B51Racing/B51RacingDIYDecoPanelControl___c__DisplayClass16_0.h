#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3EEDB4263A2F6FE3;
class Class_1_80E89104401E1D26;

#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC865D20)
#define RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0___GETSELECTEDITEMINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xC8664D0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYDecoPanelControl___c__DisplayClass16_0_TypeDefinitionIndex = 80445;

	class B51RacingDIYDecoPanelControl___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_1_80E89104401E1D26* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSelectedItemIndex_b__0(::Class_1_3EEDB4263A2F6FE3* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3EEDB4263A2F6FE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYDECOPANELCONTROL___C__DISPLAYCLASS16_0___GETSELECTEDITEMINDEX_B__0_OFFSET))(this, a1);
		}
	};
}
