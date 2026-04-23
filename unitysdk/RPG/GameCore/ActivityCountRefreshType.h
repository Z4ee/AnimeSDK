#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityCountRefreshType_TypeDefinitionIndex = 10969;

	enum class ActivityCountRefreshType : ::System::Int32
	{
		NoRefresh = 0,
		DailyRefresh = 1,
		DailyAccumulateRefresh = 2,
	};
}
