#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_17.h"

class Class_3_F65294BF89CA0784;
namespace RPG::GameCore { class DiceCombatAIEffectEvaluatorConfig_DiceDiffCount; }

#define CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET UNITYSDK_OFFSET(0x1623ACD0)
#define CLASS_2_508F8D6524E0112D__CTOR_OFFSET UNITYSDK_OFFSET(0x1623ACC0)

inline static constexpr unsigned int Class_2_508F8D6524E0112D_TypeDefinitionIndex = 35529;

class Class_2_508F8D6524E0112D : public ::Class_1_43BD383C98B4C0C5_17
{
public:
	::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* IGHAHBNLIJA; // 0x10
	::Class_3_F65294BF89CA0784* EEFMDEHLLFI; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount* a1, ::Class_3_F65294BF89CA0784* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatAIEffectEvaluatorConfig_DiceDiffCount*, ::Class_3_F65294BF89CA0784*))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_CC11D045CAA14F48()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508F8D6524E0112D_METHOD_2_CC11D045CAA14F48_OFFSET))(this);
	}
};
