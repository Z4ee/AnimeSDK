#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LineupRecommendationReportActionType_TypeDefinitionIndex = 62792;

	enum class LineupRecommendationReportActionType : ::System::Int32
	{
		OpenTab = 1,
		ChangeShowOwnership = 2,
		RefreshRecommend = 3,
	};
}
