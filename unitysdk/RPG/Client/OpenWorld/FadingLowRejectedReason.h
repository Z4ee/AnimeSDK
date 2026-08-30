#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingLowRejectedReason_TypeDefinitionIndex = 73847;

	enum class FadingLowRejectedReason : ::System::Int32
	{
		None = 0,
		ConsequenceClassNotEligible = 1,
		FastFadingRequested = 2,
		SwitchInVision = 3,
		NotFarDistance = 4,
		XLSize = 5,
		RecentlyPromoted = 6,
	};
}
