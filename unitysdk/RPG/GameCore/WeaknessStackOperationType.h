#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeaknessStackOperationType_TypeDefinitionIndex = 17488;

	enum class WeaknessStackOperationType : ::System::Int32
	{
		Override = 0,
		Protected = 1,
		Attach = 2,
		Secret = 3,
	};
}
