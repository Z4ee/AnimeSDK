#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_RayMethod_TypeDefinitionIndex = 75554;

	enum class AnimatorZoneHitWallEffect_RayMethod : ::System::Int32
	{
		ONE_FRAME_ONE_RAY = 0,
		ONE_FRAME_ALL_RAY = 1,
	};
}
