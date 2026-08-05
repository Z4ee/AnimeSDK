#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 13678;

	enum class ELevelNodeState : ::System::Int16
	{
		WaitingServer = 5,
		Finish = 1,
		GiveUp = 3,
		EnumCount = 6,
		Running = 2,
		RunningAndNotUnlockByServer = 4,
	};
}
