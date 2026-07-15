#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersStatisticType_TypeDefinitionIndex = 12003;

	enum class TeamTowersStatisticType : ::System::Int32
	{
		Invalid = 0,
		SeriesSuccessPlacedCount = 1,
		SavePlayerCount = 2,
		CastSkillCount = 3,
		DamagePercent = 4,
		TowerHeight = 5,
		DeadCount = 6,
		FailPlacedCount = 7,
	};
}
