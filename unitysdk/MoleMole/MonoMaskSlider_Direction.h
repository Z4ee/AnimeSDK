#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoMaskSlider_Direction_TypeDefinitionIndex = 77205;

	enum class MonoMaskSlider_Direction : ::System::Int32
	{
		TopToBottom = 3,
		HorizontalSideToCenter = 4,
		RightToLeft = 1,
		BottomToTop = 2,
		LeftToRight = 0,
	};
}
