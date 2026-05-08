#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishClickButtonWidgetController_EButtonState_TypeDefinitionIndex = 80890;

	enum class UISummerFishClickButtonWidgetController_EButtonState : ::System::Int32
	{
		QTE = 2,
		None = 0,
		Normal = 6,
		ContinueClick = 4,
		WaitFish = 1,
		WaitBattle = 3,
		LongPress = 5,
	};
}
