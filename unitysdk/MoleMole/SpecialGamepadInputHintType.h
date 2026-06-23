#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 48529;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		MouseMiddleButtonScroll = 6,
		RightStick = 2,
		DPadLeftRight = 5,
		DPadUpDownLeftRight = 3,
		DPadUpDown = 4,
		None = 0,
		LeftStick = 1,
	};
}
