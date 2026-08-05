#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_BakingState_TypeDefinitionIndex = 34772;

	enum class ConfinerOven_BakingState : ::System::Int32
	{
		BAKING = 0,
		BAKED = 1,
		TIMEOUT = 2,
	};
}
