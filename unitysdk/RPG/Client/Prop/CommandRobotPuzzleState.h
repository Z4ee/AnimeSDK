#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleState_TypeDefinitionIndex = 74554;

	enum class CommandRobotPuzzleState : ::System::Int32
	{
		WaitOrder = 0,
		ExecutingOrder = 1,
	};
}
