#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EBehaviorStatus_TypeDefinitionIndex = 8506;

	enum class EBehaviorStatus : ::System::Int32
	{
		Uninitialized = 0,
		ReadyToDestroy = 4,
		Active = 2,
		BlendOut = 3,
		BlendIn = 1,
	};
}
