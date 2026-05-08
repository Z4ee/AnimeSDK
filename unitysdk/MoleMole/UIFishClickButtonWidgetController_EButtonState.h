#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 42889;

	enum class UIFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		None = 0,
		ContinueClick = 4,
		WaitBattle = 3,
		WaitFish = 1,
		QTE = 2,
		LongPress = 5,
	};
}
