#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 86501;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		Moving = 6,
		WaitForMove = 3,
		FadeIn = 2,
		FadeOut = 9,
		FadeOutFinish = 4,
		MovingWaitForFadeOut = 8,
		Normal = 1,
		FadeInWaitMoving = 5,
		MovingWaitForFadein = 7,
		WaitForFadeIn = 0,
	};
}
