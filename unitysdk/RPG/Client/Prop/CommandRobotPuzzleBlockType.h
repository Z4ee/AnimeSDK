#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBlockType_TypeDefinitionIndex = 73033;

	enum class CommandRobotPuzzleBlockType : ::System::Int32
	{
		None = 0,
		BeginningPoint = 1,
		Destination = 2,
		Block = 3,
		Pressure = 4,
		LockedPressure = 5,
	};
}
