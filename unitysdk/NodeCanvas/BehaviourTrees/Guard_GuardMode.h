#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Guard_GuardMode_TypeDefinitionIndex = 29799;

	enum class Guard_GuardMode : ::System::Int32
	{
		WaitUntilReleased = 1,
		ReturnFailure = 0,
	};
}
