#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindObjectCameraMode_TypeDefinitionIndex = 16436;

	enum class TimeRewindObjectCameraMode : ::System::Int32
	{
		LookAtCamera = 0,
		AnchorCamera = 1,
	};
}
