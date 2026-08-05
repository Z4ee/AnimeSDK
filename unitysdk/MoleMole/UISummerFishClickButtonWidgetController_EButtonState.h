#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 53863;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		WaitFish = 1,
		WaitBattle = 3,
		Normal = 6,
		QTE = 2,
		None = 0,
		ContinueClick = 4,
		LongPress = 5,
	};
}
