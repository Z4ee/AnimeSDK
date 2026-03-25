#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchManager_GizmoShowOption_TypeDefinitionIndex = 31473;

	enum class TouchManager_GizmoShowOption : ::System::Int32
	{
		Never = 0,
		WhenSelected = 1,
		UnlessPlaying = 2,
		Always = 3,
	};
}
