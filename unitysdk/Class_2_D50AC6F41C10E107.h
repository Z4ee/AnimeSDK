#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceSelectCount; }

#define CLASS_2_D50AC6F41C10E107_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1973AFD0)
#define CLASS_2_D50AC6F41C10E107__CTOR_OFFSET UNITYSDK_OFFSET(0x19734AB0)

inline static constexpr unsigned int Class_2_D50AC6F41C10E107_TypeDefinitionIndex = 35533;

class Class_2_D50AC6F41C10E107 : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* IGHAHBNLIJA; // 0x10
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceSelectCount*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_D50AC6F41C10E107__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D50AC6F41C10E107_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
