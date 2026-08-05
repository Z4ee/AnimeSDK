#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIActionState_TypeDefinitionIndex = 47013;

	enum class NPCAIActionState : ::System::Int32
	{
		Failed = 4,
		Aborted = 3,
		InProgress = 1,
		None = 0,
		Completed = 2,
	};
}
