#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 61947;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		MouseMiddleButtonScroll = 6,
		DPadUpDown = 4,
		None = 0,
		DPadLeftRight = 5,
		LeftStick = 1,
		RightStick = 2,
		DPadUpDownLeftRight = 3,
	};
}
