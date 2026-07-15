#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSplineMoveLoopType_TypeDefinitionIndex = 17830;

	enum class FiveDimSplineMoveLoopType : ::System::Int32
	{
		Once = 0,
		Loop = 1,
		PingPong = 2,
	};
}
