#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int PostEffectType_TypeDefinitionIndex = 24721;

	enum class PostEffectType : ::System::Int32
	{
		RADIAL_BLUR = 4,
		SCREEN_EFFECT = 3,
		COLOR_ADJUSTMENTS = 5,
		POST_EFFECT_TYPE_NONE = 0,
		VIGNETTE_EFFECT = 2,
		GLITCH = 1,
	};
}
