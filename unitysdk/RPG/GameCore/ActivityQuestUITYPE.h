#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityQuestUITYPE_TypeDefinitionIndex = 11841;

	enum class ActivityQuestUITYPE : ::System::Int32
	{
		FirstDream = 1,
		CleanRoad = 2,
		FindTreasure = 3,
		WarReporter = 4,
		KillMonster = 5,
		MazeExplore = 6,
		TreasureCollection = 7,
		SpecialExperience = 8,
	};
}
