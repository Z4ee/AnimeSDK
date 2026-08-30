#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AnchorVirtualCameraMode_TypeDefinitionIndex = 68284;

	enum class AnchorVirtualCameraMode : ::System::Int32
	{
		TownExit = 0,
		LookAtPhone = 1,
		LookAtProp = 2,
		Lift = 3,
	};
}
