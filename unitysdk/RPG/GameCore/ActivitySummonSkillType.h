#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonSkillType_TypeDefinitionIndex = 11336;

	enum class ActivitySummonSkillType : ::System::Int32
	{
		AvatarSkill = 1,
		AvatarUltimate = 2,
		SummonerSkill = 3,
		SummonerPassive = 4,
	};
}
