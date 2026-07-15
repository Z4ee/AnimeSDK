#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamLimitType_TypeDefinitionIndex = 10130;

	enum class TeamLimitType : ::System::Int32
	{
		Unknown = 0,
		IncludeAvatar = 1,
		TeamLevel = 2,
		TeamAvatarMinCount = 3,
		IncludeAnyHeroAvatar = 4,
		ForbidReplace = 5,
		IncludeMultiPathAvatar = 6,
	};
}
