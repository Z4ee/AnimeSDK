#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SwipeCameraStateEnum_TypeDefinitionIndex = 66532;

	enum class SwipeCameraStateEnum : ::System::Int32
	{
		Idle = 0,
		Swipe = 1,
		Recover = 2,
	};
}
