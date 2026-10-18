#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int BlendCurve_TypeDefinitionIndex = 48745;

	enum class BlendCurve : ::System::Int32
	{
		Linear = 0,
		EaseInOut = 1,
	};
}
