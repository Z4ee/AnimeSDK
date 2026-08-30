#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageMonsterInvasionParamType_TypeDefinitionIndex = 56365;

	enum class StageMonsterInvasionParamType : ::System::Int32
	{
		KillThresh = 0,
		MaxHPRatio = 1,
		NormalDamageConvertRatio = 2,
		ElationDamageConvertRatio = 3,
		MaxHPRatioForMultHP = 4,
	};
}
