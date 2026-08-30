#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnRecommendType_TypeDefinitionIndex = 14357;

	enum class PlayerReturnRecommendType : ::System::Int32
	{
		None = 0,
		Gacha = 1,
		TrailblazeMission = 2,
		Activity = 3,
		CustomGoto = 4,
	};
}
