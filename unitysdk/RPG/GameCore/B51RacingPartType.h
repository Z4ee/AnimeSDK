#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingPartType_TypeDefinitionIndex = 10946;

	enum class B51RacingPartType : ::System::Int32
	{
		None = 0,
		Head = 1,
		Engine = 2,
		RearWing = 3,
	};
}
