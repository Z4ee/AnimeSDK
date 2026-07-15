#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightUnlockFunctionType_TypeDefinitionIndex = 13071;

	enum class GridFightUnlockFunctionType : ::System::Int32
	{
		SeasonExpLine = 1,
		WeeklyExpLine = 2,
		SeasonTraitQuest = 3,
		SeasonTalentTree = 4,
		SeasonHandBook = 5,
		SeasonQuest = 6,
		SeasonGuideBook = 7,
		Introduction = 8,
		HistoricalRecords = 9,
		HpRule = 10,
	};
}
