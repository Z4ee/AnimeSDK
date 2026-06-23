#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 73822;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		ContinueClick = 4,
		WaitFish = 1,
		QTE = 2,
		Normal = 6,
		None = 0,
		WaitBattle = 3,
		LongPress = 5,
	};
}
