#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPositionType_TypeDefinitionIndex = 15569;

	enum class PingPongPositionType : ::System::Int32
	{
		GridIndex = 0,
		FloatPos = 1,
	};
}
