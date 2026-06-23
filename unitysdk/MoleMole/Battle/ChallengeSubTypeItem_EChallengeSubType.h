#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 58522;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		RegionVisited = 6,
		AliveOrNpcGuard = 3,
		MonsterKill = 1,
		OccupyInteractive = 5,
		CharacterStatus = 2,
		LevelConditionLink = 7,
		ManualCondition = 8,
		ExploreCollect = 4,
		None = -1,
	};
}
