#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidLimitType_TypeDefinitionIndex = 14001;

	enum class RaidLimitType : ::System::Int32
	{
		Unknown = 0,
		IncludeAvatar = 1,
		TeamLevel = 2,
		HasMainMission = 3,
		TeamAvatarMinCount = 4,
		FinishQuest = 5,
		IncludeAnyHeroAvatar = 6,
	};
}
