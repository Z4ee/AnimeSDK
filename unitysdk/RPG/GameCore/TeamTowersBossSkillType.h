#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossSkillType_TypeDefinitionIndex = 18213;

	enum class TeamTowersBossSkillType : ::System::Int32
	{
		None = 0,
		Ice = 1,
		Wind = 2,
		LockRotation = 3,
		SpeedUp = 4,
	};
}
