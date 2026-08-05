#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 75362;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		None = 0,
		DPadUpDownLeftRight = 3,
		DPadLeftRight = 5,
		DPadUpDown = 4,
		MouseMiddleButtonScroll = 6,
		LeftStick = 1,
		RightStick = 2,
	};
}
