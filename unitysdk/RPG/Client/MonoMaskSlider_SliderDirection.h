#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMaskSlider_SliderDirection_TypeDefinitionIndex = 66881;

	enum class MonoMaskSlider_SliderDirection : ::System::Int32
	{
		LeftToRight = 0,
		RightToLeft = 1,
		BottomToTop = 2,
		TopToBottom = 3,
		CenterToSides = 4,
	};
}
