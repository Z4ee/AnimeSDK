#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CLASS_2_388AB69FB9FDF843___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188726F0)
#define CLASS_2_388AB69FB9FDF843___C__DISPLAYCLASS27_0___REMOVEMAXSPEEDMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x18872700)

inline static constexpr unsigned int Class_2_388AB69FB9FDF843___c__DisplayClass27_0_TypeDefinitionIndex = 58573;

class Class_2_388AB69FB9FDF843___c__DisplayClass27_0 : public ::System::Object
{
public:
	::System::Int32 priority; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RemoveMaxSpeedModifier_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CLASS_2_388AB69FB9FDF843___C__DISPLAYCLASS27_0___REMOVEMAXSPEEDMODIFIER_B__0_OFFSET))(this, a1);
	}
};
