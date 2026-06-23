#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 66968;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		WaitBattle = 3,
		None = 0,
		ContinueClick = 4,
		QTE = 2,
		WaitFish = 1,
		LongPress = 5,
	};
}
