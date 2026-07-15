#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtMoveStopReason_TypeDefinitionIndex = 51565;

	enum class RtMoveStopReason : ::System::Int32
	{
		None = 0,
		Finish = 1,
		Fail = 2,
		Forbid = 3,
		Abort = 4,
		Unreachable = 5,
		Replace = 6,
	};
}
