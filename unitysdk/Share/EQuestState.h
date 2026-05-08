#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 11429;

	enum class EQuestState : ::System::Int16
	{
		InProgress = 1,
		Ready = 10,
		ToFinish = 2,
		Unlocked = 0,
		Finished = 3,
	};
}
