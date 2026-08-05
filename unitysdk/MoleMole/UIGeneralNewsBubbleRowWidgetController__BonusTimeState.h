#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__BonusTimeState_TypeDefinitionIndex = 43622;

	enum class UIGeneralNewsBubbleRowWidgetController__BonusTimeState : ::System::Int32
	{
		IsShowing = 1,
		Ready = 0,
		IsDoFadeOut = 2,
		BlinkWait = 5,
		Blinking = 4,
		BlinkRestart = 3,
	};
}
