#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 43598;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		MovingWaitForFadeOut = 8,
		Moving = 6,
		WaitForFadeIn = 0,
		FadeOutFinish = 4,
		WaitForMove = 3,
		MovingWaitForFadein = 7,
		FadeInWaitMoving = 5,
		FadeIn = 2,
		FadeOut = 9,
		Normal = 1,
	};
}
