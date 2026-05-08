#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 12281;

	enum class EEventState : ::System::Int16
	{
		Error = 6,
		Running = 1,
		Pause = 2,
		Initing = 0,
		WaitingClient = 4,
		EnumCount = 7,
		WaitingMsg = 3,
		Finished = 5,
	};
}
