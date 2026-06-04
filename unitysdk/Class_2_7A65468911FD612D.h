#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_16.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllDiff; }

#define CLASS_2_7A65468911FD612D_METHOD_2_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x18A9A360)
#define CLASS_2_7A65468911FD612D__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9A350)

inline static constexpr unsigned int Class_2_7A65468911FD612D_TypeDefinitionIndex = 34291;

class Class_2_7A65468911FD612D : public ::Class_1_43BD383C98B4C0C5_16
{
public:
	::Class_3_F65294BF89CA0784* Field_2_0; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_7A65468911FD612D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A65468911FD612D_METHOD_2_124E7DAB85EAFECD_OFFSET))(this);
	}
};
