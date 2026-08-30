#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8FF829EFDD29B81;
class Class_2_6B60059019300BAD;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }

#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCFC7B40)
#define CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET UNITYSDK_OFFSET(0xCFCC5F0)

inline static constexpr unsigned int Class_1_B8FF829EFDD29B81___c__DisplayClass18_0_TypeDefinitionIndex = 77403;

class Class_1_B8FF829EFDD29B81___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_B8FF829EFDD29B81* __4__this; // 0x10
	::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* attributeRankEvaluator; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Single __EvaluateAttributeRankSoldiers_b__1(::Class_2_6B60059019300BAD* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_6B60059019300BAD*))((::PBYTE)hIl2Cpp + CLASS_1_B8FF829EFDD29B81___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET))(this, a1);
	}
};
