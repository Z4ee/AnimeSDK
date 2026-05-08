#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__BonusTimeState_TypeDefinitionIndex = 73352;

	enum class UIGeneralNewsBubbleRowWidgetController__BonusTimeState : ::System::Int32
	{
		IsShowing = 1,
		Blinking = 4,
		BlinkWait = 5,
		IsDoFadeOut = 2,
		BlinkRestart = 3,
		Ready = 0,
	};
}
