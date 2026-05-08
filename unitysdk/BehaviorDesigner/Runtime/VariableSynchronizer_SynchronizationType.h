#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int VariableSynchronizer_SynchronizationType_TypeDefinitionIndex = 31719;

	enum class VariableSynchronizer_SynchronizationType : ::System::Int32
	{
		BehaviorDesigner = 0,
		Property = 1,
		Animator = 2,
		PlayMaker = 3,
		uFrame = 4,
	};
}
