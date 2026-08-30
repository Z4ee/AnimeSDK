#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TeleportType_TypeDefinitionIndex = 60686;

	enum class TeleportType : ::System::Int32
	{
		BetweenRegionDefaultPose = 0,
		SameRegionSamePose = 1,
		SameRegionBetweenPose = 2,
		BetweenRegionAnyPose = 3,
	};
}
