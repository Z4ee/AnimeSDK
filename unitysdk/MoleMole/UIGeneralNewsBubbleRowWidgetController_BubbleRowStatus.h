#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus_TypeDefinitionIndex = 73355;

	enum class UIGeneralNewsBubbleRowWidgetController_BubbleRowStatus : ::System::Int32
	{
		Moving = 6,
		MovingWaitForFadeOut = 8,
		MovingWaitForFadein = 7,
		FadeInWaitMoving = 5,
		FadeOutFinish = 4,
		Normal = 1,
		WaitForMove = 3,
		WaitForFadeIn = 0,
		FadeIn = 2,
		FadeOut = 9,
	};
}
