#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchControl_SnapAngles_TypeDefinitionIndex = 37189;

	enum class TouchControl_SnapAngles : ::System::Int32
	{
		None = 0,
		Four = 4,
		Eight = 8,
		Sixteen = 16,
	};
}
