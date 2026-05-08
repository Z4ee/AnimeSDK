#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 45593;

	enum class NPCAIActionState : ::System::Int32
	{
		InProgress = 1,
		Completed = 2,
		None = 0,
		Aborted = 3,
		Failed = 4,
	};
}
