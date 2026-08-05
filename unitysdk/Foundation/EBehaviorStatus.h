#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int EBehaviorStatus_TypeDefinitionIndex = 8656;

	enum class EBehaviorStatus : ::System::Int32
	{
		ReadyToDestroy = 4,
		BlendIn = 1,
		Active = 2,
		Uninitialized = 0,
		BlendOut = 3,
	};
}
