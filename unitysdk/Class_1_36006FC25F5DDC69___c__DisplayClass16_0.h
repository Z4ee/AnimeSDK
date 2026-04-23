#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }

#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1292F390)
#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET UNITYSDK_OFFSET(0x12933540)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69___c__DisplayClass16_0_TypeDefinitionIndex = 71370;

class Class_1_36006FC25F5DDC69___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_36006FC25F5DDC69* __4__this; // 0x10
	::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* randomNSoldiersEvaluator; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __EvaluateRandomNSoldiers_b__0(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET))(this, soldier);
	}
};
