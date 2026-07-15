#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSourceSystemType_TypeDefinitionIndex = 11711;

	enum class PlanetFesSourceSystemType : ::System::Int32
	{
		None = 0,
		Land = 1,
		Avatar = 2,
		Card = 3,
		Fes = 4,
		Gameplay = 5,
		Quest = 6,
		Gacha = 7,
		Unlock = 8,
		SkillTree = 9,
		BusinessDay = 10,
		RegionProgress = 11,
		BusinessEvent = 12,
	};
}
