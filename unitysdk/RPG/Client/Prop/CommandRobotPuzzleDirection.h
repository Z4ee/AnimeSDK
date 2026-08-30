#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleDirection_TypeDefinitionIndex = 78044;

	enum class CommandRobotPuzzleDirection : ::System::Int32
	{
		Up = 0,
		Right = 1,
		Down = 2,
		Left = 3,
	};
}
