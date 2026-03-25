#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveRateSlider_ContentMoveDirection_TypeDefinitionIndex = 59476;

	enum class MonoCurveRateSlider_ContentMoveDirection : ::System::Int32
	{
		TopToBottom = 0,
		BottomToTop = 1,
		LeftToRight = 2,
		RightToLeft = 3,
	};
}
