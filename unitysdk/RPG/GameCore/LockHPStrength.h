#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockHPStrength_TypeDefinitionIndex = 21856;

	enum class LockHPStrength : ::System::Int32
	{
		Hard = 99,
		Weak = 1,
	};
}
