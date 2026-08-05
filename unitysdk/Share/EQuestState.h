#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 15320;

	enum class EQuestState : ::System::Int16
	{
		Unlocked = 0,
		Ready = 10,
		InProgress = 1,
		Finished = 3,
		ToFinish = 2,
	};
}
