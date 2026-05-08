#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 63190;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		GamepadLeftStick = 0,
		PhotoModeZoom = 4,
		GamepadDpad = 7,
		GamepadRightStick = 1,
		MouseScroll = 3,
		MousePosition = 6,
		None = -1,
		InLevelCameraMousePositionDelta = 2,
		MousePositionDeltaRaw = 5,
	};
}
