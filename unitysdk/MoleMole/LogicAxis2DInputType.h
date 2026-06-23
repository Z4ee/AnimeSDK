#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 51169;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		InLevelCameraMousePositionDelta = 2,
		MouseScroll = 3,
		MousePosition = 6,
		PhotoModeZoom = 4,
		GamepadDpad = 7,
		GamepadLeftStick = 0,
		GamepadRightStick = 1,
		MousePositionDeltaRaw = 5,
		None = -1,
	};
}
