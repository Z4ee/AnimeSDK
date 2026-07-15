#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy; }

#define CLASS_2_D4F6B27EA1E44B35_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x17B9F130)
#define CLASS_2_D4F6B27EA1E44B35__CTOR_OFFSET UNITYSDK_OFFSET(0x17B9F120)

inline static constexpr unsigned int Class_2_D4F6B27EA1E44B35_TypeDefinitionIndex = 34669;

class Class_2_D4F6B27EA1E44B35 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::Class_3_F65294BF89CA0784* Field_2_0; // 0x10
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DicePointSameWithEnemy*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_D4F6B27EA1E44B35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4F6B27EA1E44B35_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
