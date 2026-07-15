#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleFailureTipType_TypeDefinitionIndex = 12381;

	enum class BattleFailureTipType : ::System::Int32
	{
		Unknown = 0,
		AvatarLevel = 1,
		SkillTree = 2,
		LightCone = 3,
		Relic = 4,
		RogueBless = 5,
		RogueSkillTree = 6,
		ItemConsume = 7,
		BattleEffect = 8,
	};
}
