#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesLevelUnlockType_TypeDefinitionIndex = 11714;

	enum class PlanetFesLevelUnlockType : ::System::Int32
	{
		None = 0,
		AvatarCard = 1,
		SkillTree = 2,
		GachaCard = 3,
		AvatarEvent = 4,
		Bonus = 5,
	};
}
