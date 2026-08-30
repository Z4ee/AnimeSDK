#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceAllDiff; }

#define CLASS_2_7A65468911FD612D_METHOD_2_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x1AAE5890)
#define CLASS_2_7A65468911FD612D__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAE5880)

inline static constexpr unsigned int Class_2_7A65468911FD612D_TypeDefinitionIndex = 35534;

class Class_2_7A65468911FD612D : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* IGHAHBNLIJA; // 0x10
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceAllDiff*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_7A65468911FD612D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_124E7DAB85EAFECD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7A65468911FD612D_METHOD_2_124E7DAB85EAFECD_OFFSET))(this);
	}
};
