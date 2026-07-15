#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAnimStateResult_TypeDefinitionIndex = 54615;

	enum class WaitAnimStateResult : ::System::Int32
	{
		InvalidState = 0,
		StateOutOfDate = 1,
		StateNotTrigger = 2,
		Finish = 3,
		Waiting = 4,
	};
}
