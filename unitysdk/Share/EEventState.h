#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 12053;

	enum class EEventState : ::System::Int16
	{
		Running = 1,
		Pause = 2,
		WaitingMsg = 3,
		Error = 6,
		EnumCount = 7,
		WaitingClient = 4,
		Finished = 5,
		Initing = 0,
	};
}
