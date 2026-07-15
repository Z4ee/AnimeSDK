#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleEffectLifeTimeType_TypeDefinitionIndex = 15092;

	enum class ChenLingBattleEffectLifeTimeType : ::System::Int32
	{
		Auto = 0,
		TargetAlive = 1,
		LaserHit = 2,
		EffectLiftTime = 3,
		Walk = 4,
	};
}
