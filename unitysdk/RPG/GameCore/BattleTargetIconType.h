#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetIconType_TypeDefinitionIndex = 12364;

	enum class BattleTargetIconType : ::System::Int32
	{
		Star = 0,
		Round = 1,
		PeakBossStar = 2,
		PeakDifficultyBossStar = 3,
		TierceSpecialStar = 4,
	};
}
