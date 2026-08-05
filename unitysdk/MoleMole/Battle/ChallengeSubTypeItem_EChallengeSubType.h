#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 67056;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		ManualCondition = 8,
		AliveOrNpcGuard = 3,
		RegionVisited = 6,
		LevelConditionLink = 7,
		None = -1,
		MonsterKill = 1,
		OccupyInteractive = 5,
		CharacterStatus = 2,
		ExploreCollect = 4,
	};
}
