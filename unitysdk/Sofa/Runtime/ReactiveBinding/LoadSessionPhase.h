#pragma once
#include "unitysdk/unitysdk.h"

namespace Sofa::Runtime::ReactiveBinding
{
	inline static constexpr unsigned int LoadSessionPhase_TypeDefinitionIndex = 50292;

	enum class LoadSessionPhase : ::System::Int32
	{
		Idle = 0,
		LoadingResource = 1,
		ResourceReady = 2,
		CreatingView = 3,
		Completed = 4,
		ResourceFailed = 5,
		ViewFailed = 6,
	};
}
