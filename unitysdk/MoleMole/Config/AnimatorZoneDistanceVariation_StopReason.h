#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDistanceVariation_StopReason_TypeDefinitionIndex = 69108;

	enum class AnimatorZoneDistanceVariation_StopReason : ::System::Int32
	{
		OverMaxMoveDistance = 3,
		ToOtherState = 2,
		ExitZone = 1,
		HitOther = 0,
	};
}
