#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 86153;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		GamepadLeftStick = 0,
		MousePositionDeltaRaw = 5,
		None = -1,
		MouseScroll = 3,
		GamepadRightStick = 1,
		GamepadDpad = 7,
		MousePosition = 6,
		PhotoModeZoom = 4,
		InLevelCameraMousePositionDelta = 2,
	};
}
