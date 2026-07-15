#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildRewardBoxGearUpgradeEffect_TypeDefinitionIndex = 51104;

	enum class EvolveBuildRewardBoxGearUpgradeEffect : ::System::Int32
	{
		None = 0,
		Rise = 1,
		Forge = 2,
		DuelForge = 3,
		UltraForge = 4,
		Mix2DuelForge = 5,
		Mix2UltraForge = 6,
	};
}
