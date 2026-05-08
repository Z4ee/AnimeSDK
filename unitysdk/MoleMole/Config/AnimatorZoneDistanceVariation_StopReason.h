#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_StopReason_TypeDefinitionIndex = 54969;

	enum class AnimatorZoneDistanceVariation_StopReason : ::System::Int32
	{
		ToOtherState = 2,
		HitOther = 0,
		OverMaxMoveDistance = 3,
		ExitZone = 1,
	};
}
