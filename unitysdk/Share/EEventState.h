#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventState_TypeDefinitionIndex = 15386;

	enum class EEventState : ::System::Int16
	{
		Pause = 2,
		WaitingClient = 4,
		Finished = 5,
		Initing = 0,
		Running = 1,
		EnumCount = 7,
		Error = 6,
		WaitingMsg = 3,
	};
}
