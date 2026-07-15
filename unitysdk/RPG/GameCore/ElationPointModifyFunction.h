#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationPointModifyFunction_TypeDefinitionIndex = 23788;

	enum class ElationPointModifyFunction : ::System::Int32
	{
		None = 0,
		Add = 1,
		Sub = 2,
		Set = 3,
	};
}
