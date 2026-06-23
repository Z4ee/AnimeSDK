#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaskSlider_Direction_TypeDefinitionIndex = 75168;

	enum class MonoMaskSlider_Direction : ::System::Int32
	{
		RightToLeft = 1,
		TopToBottom = 3,
		LeftToRight = 0,
		HorizontalSideToCenter = 4,
		BottomToTop = 2,
	};
}
