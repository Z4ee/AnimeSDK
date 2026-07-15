#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvMonsterFetchType_TypeDefinitionIndex = 23921;

	enum class TargetFetchAdvMonsterFetchType : ::System::Int32
	{
		Owner = 0,
		SingleByMonsterKey = 1,
		SingleByMonsterID = 2,
		SingleByOwnerGroupAndID = 3,
		MultiByMonsterKey = 4,
		MultiByMonsterID = 5,
		MultiByOwnerGroup = 6,
	};
}
