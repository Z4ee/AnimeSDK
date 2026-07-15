#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EParkourEventType_TypeDefinitionIndex = 11639;

	enum class EParkourEventType : ::System::Int32
	{
		Unknown = 0,
		Passed = 1,
		BePassed = 2,
		GameStart = 3,
		UseSkill = 4,
		Fire = 5,
		Random = 6,
		NearPlayerTime = 7,
		BeAttackCount = 8,
		Broken = 9,
		BrokenFinish = 10,
		SkillRandomStart = 11,
		SkillRandomFinish = 12,
		Response = 13,
	};
}
