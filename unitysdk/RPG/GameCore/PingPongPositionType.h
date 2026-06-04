#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongPositionType_TypeDefinitionIndex = 16139;

	enum class PingPongPositionType : ::System::Int32
	{
		GridIndex = 0,
		FloatPos = 1,
	};
}
