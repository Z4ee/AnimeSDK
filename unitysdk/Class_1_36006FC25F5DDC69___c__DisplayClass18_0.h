#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class ChenLingBattleTargetEvaluator_WithAttributeRank; }

#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11771F50)
#define CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET UNITYSDK_OFFSET(0x11776190)

inline static constexpr unsigned int Class_1_36006FC25F5DDC69___c__DisplayClass18_0_TypeDefinitionIndex = 63331;

class Class_1_36006FC25F5DDC69___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_36006FC25F5DDC69* __4__this; // 0x10
	::RPG::GameCore::ChenLingBattleTargetEvaluator_WithAttributeRank* attributeRankEvaluator; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Single __EvaluateAttributeRankSoldiers_b__1(::Class_2_181A7F9409C60DBC* soldier)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_1_36006FC25F5DDC69___C__DISPLAYCLASS18_0___EVALUATEATTRIBUTERANKSOLDIERS_B__1_OFFSET))(this, soldier);
	}
};
