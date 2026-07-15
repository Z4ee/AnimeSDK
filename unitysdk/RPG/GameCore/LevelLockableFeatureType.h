#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLockableFeatureType_TypeDefinitionIndex = 17557;

	enum class LevelLockableFeatureType : ::System::Int32
	{
		Unknow = 0,
		LinkAttack_Obsolete = 1,
		TeamBoostPoint = 2,
		UISkill02 = 3,
		UISkill03 = 4,
		TurnStartPage = 5,
	};
}
