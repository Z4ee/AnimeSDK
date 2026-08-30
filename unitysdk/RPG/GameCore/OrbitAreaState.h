#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrbitAreaState_TypeDefinitionIndex = 24385;

	enum class OrbitAreaState : ::System::Int32
	{
		Normal = 0,
		CrossLeftDeathArea = 1,
		CrossRightDeathArea = 2,
	};
}
