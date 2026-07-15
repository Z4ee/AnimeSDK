#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightForgeFuncType_TypeDefinitionIndex = 12944;

	enum class GridFightForgeFuncType : ::System::Int32
	{
		None = 0,
		Equip = 1,
		Role = 2,
		Expert = 3,
	};
}
