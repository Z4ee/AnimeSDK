#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 69975;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		None = -1,
		CharacterStatus = 2,
		LevelConditionLink = 7,
		ManualCondition = 8,
		OccupyInteractive = 5,
		RegionVisited = 6,
		AliveOrNpcGuard = 3,
		MonsterKill = 1,
		ExploreCollect = 4,
	};
}
