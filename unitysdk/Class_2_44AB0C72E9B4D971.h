#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum; }

#define CLASS_2_44AB0C72E9B4D971_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x1AAF8810)
#define CLASS_2_44AB0C72E9B4D971__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF8800)

inline static constexpr unsigned int Class_2_44AB0C72E9B4D971_TypeDefinitionIndex = 35524;

class Class_2_44AB0C72E9B4D971 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceOddOrEvenSpecificNum*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_44AB0C72E9B4D971__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44AB0C72E9B4D971_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
