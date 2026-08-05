#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 61839;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		WaitBattle = 3,
		QTE = 2,
		ContinueClick = 4,
		WaitFish = 1,
		None = 0,
		LongPress = 5,
	};
}
