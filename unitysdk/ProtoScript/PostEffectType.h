#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int PostEffectType_TypeDefinitionIndex = 22118;

	enum class PostEffectType : ::System::Int32
	{
		GLITCH = 1,
		VIGNETTE_EFFECT = 2,
		COLOR_ADJUSTMENTS = 5,
		POST_EFFECT_TYPE_NONE = 0,
		SCREEN_EFFECT = 3,
		RADIAL_BLUR = 4,
	};
}
