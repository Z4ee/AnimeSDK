#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestState_TypeDefinitionIndex = 15176;

	enum class EQuestState : ::System::Int16
	{
		ToFinish = 2,
		InProgress = 1,
		Ready = 10,
		Unlocked = 0,
		Finished = 3,
	};
}
