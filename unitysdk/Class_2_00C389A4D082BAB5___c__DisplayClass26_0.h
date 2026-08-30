#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }

#define CLASS_2_00C389A4D082BAB5___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09C2C0)
#define CLASS_2_00C389A4D082BAB5___C__DISPLAYCLASS26_0___REMOVETUTORIALMAXSPEEDMODIFIER_B__0_OFFSET UNITYSDK_OFFSET(0x1A09C330)

inline static constexpr unsigned int Class_2_00C389A4D082BAB5___c__DisplayClass26_0_TypeDefinitionIndex = 58583;

class Class_2_00C389A4D082BAB5___c__DisplayClass26_0 : public ::System::Object
{
public:
	::System::Int32 priority; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RemoveTutorialMaxSpeedModifier_b__0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + CLASS_2_00C389A4D082BAB5___C__DISPLAYCLASS26_0___REMOVETUTORIALMAXSPEEDMODIFIER_B__0_OFFSET))(this, a1);
	}
};
