#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__BonusTimeState_TypeDefinitionIndex = 86489;

	enum class UIGeneralNewsBubbleRowWidgetController__BonusTimeState : ::System::Int32
	{
		IsDoFadeOut = 2,
		BlinkWait = 5,
		Blinking = 4,
		Ready = 0,
		BlinkRestart = 3,
		IsShowing = 1,
	};
}
