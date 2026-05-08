#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_RankingItemConfigShowType_TypeDefinitionIndex = 48346;

	enum class LevelConfig_RankingItemConfigShowType : ::System::Int32
	{
		SHOW_DURATION_TYPE = 1,
		SHOW_COMPLETE_UNCOMPLETE = 2,
		SHOW_PROGRESS_NUMBER = 0,
	};
}
