#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordType_TypeDefinitionIndex = 10531;

	enum class RecordType : ::System::Int32
	{
		None = 0,
		SingleHitCausesDamage = 1,
		SingleSkillCausesDamage = 2,
		SingleCure = 3,
		AvatarShield = 4,
		TotalLoginDays = 5,
		ConsecutiveLoginDays = 6,
		World3CollectionCnt = 7,
		World4CollectionCnt = 8,
		World5CollectionSceneCnt = 9,
		World5CollectionFiveDimCnt = 10,
	};
}
