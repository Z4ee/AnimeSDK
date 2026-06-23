#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 50990;

	enum class NPCAIActionState : ::System::Int32
	{
		Failed = 4,
		Completed = 2,
		Aborted = 3,
		None = 0,
		InProgress = 1,
	};
}
