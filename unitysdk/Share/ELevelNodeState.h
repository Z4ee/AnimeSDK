#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 16493;

	enum class ELevelNodeState : ::System::Int16
	{
		Finish = 1,
		WaitingServer = 5,
		GiveUp = 3,
		Running = 2,
		RunningAndNotUnlockByServer = 4,
		EnumCount = 6,
	};
}
