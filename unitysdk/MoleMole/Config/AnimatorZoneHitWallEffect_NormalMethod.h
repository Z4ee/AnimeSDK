#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneHitWallEffect_NormalMethod_TypeDefinitionIndex = 71468;

	enum class AnimatorZoneHitWallEffect_NormalMethod : ::System::Int32
	{
		PREFER_FIRST_HIT_NORMAL = 0,
		PREFER_LERP_ALL_NORMAL = 2,
		PREFER_START_END_NORMAL = 1,
	};
}
