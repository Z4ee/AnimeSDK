#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrbitAreaState_TypeDefinitionIndex = 23311;

	enum class OrbitAreaState : ::System::Int32
	{
		Normal = 0,
		CrossLeftDeathArea = 1,
		CrossRightDeathArea = 2,
	};
}
