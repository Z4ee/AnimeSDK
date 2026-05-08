#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaskSlider_Direction_TypeDefinitionIndex = 61992;

	enum class MonoMaskSlider_Direction : ::System::Int32
	{
		RightToLeft = 1,
		LeftToRight = 0,
		TopToBottom = 3,
		BottomToTop = 2,
		HorizontalSideToCenter = 4,
	};
}
