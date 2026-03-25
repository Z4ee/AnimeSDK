#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessMoveStopReason_TypeDefinitionIndex = 45241;

	enum class ChessMoveStopReason : ::System::Int32
	{
		Finish = 0,
		Fail = 1,
		Abort = 2,
		Forbid = 3,
		Replace = 4,
	};
}
