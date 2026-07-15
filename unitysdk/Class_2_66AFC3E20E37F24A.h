#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange; }

#define CLASS_2_66AFC3E20E37F24A_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x198C3A70)
#define CLASS_2_66AFC3E20E37F24A__CTOR_OFFSET UNITYSDK_OFFSET(0x198C3A60)

inline static constexpr unsigned int Class_2_66AFC3E20E37F24A_TypeDefinitionIndex = 34670;

class Class_2_66AFC3E20E37F24A : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* Field_2_0; // 0x10
	::Class_3_F65294BF89CA0784* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointInSpecificRange*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_66AFC3E20E37F24A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_66AFC3E20E37F24A_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
