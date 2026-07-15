#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LogSamplerParamType_TypeDefinitionIndex = 17433;

	enum class LogSamplerParamType : ::System::Int32
	{
		Int = 0,
		Uint = 1,
		String = 2,
		FixPoint = 3,
		Bool = 4,
		Byte = 5,
		HashedString = 6,
		TaskContext = 7,
		Entity = 8,
		Ability = 9,
		Modifier = 10,
		TurnState = 11,
	};
}
