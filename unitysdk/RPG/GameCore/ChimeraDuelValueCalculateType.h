#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueCalculateType_TypeDefinitionIndex = 15287;

	enum class ChimeraDuelValueCalculateType : ::System::Int32
	{
		None = 0,
		Add = 1,
		Mul = 2,
		Pow = 3,
	};
}
