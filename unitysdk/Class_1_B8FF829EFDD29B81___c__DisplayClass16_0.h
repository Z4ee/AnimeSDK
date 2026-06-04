#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_RandomNSoldiers; }

#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBA06AB0)
#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET UNITYSDK_OFFSET(0xBA0AF30)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81___c__DisplayClass16_0_TypeDefinitionIndex = 72392;

class Class_1_B8FF829EFDD29B81___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_B8FF829EFDD29B81* __4__this; // 0x10
	::RPG::GameCore::ChenLingBattleTargetEvaluator_RandomNSoldiers* randomNSoldiersEvaluator; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __EvaluateRandomNSoldiers_b__0(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS16_0___EVALUATERANDOMNSOLDIERS_B__0_OFFSET))(this, a1);
	}
};
