#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 9549;

	enum class ELevelNodeState : ::System::Int16
	{
		Finish = 1,
		WaitingServer = 5,
		GiveUp = 3,
		EnumCount = 6,
		RunningAndNotUnlockByServer = 4,
		Running = 2,
	};
}
