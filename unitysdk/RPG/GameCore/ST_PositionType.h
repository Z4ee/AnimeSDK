#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_PositionType_TypeDefinitionIndex = 23604;

	enum class ST_PositionType : ::System::Int32
	{
		AnchorPoint = 0,
		LastGuardingPos = 1,
		BornPos = 2,
		AwardStaticPosition = 3,
		StimulusPos = 4,
		DetectedNPCMonsterPos = 5,
		DetectedMoneyPos = 6,
	};
}
