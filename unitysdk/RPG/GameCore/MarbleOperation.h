#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleOperation_TypeDefinitionIndex = 16164;

	enum class MarbleOperation : ::System::Int32
	{
		Add = 0,
		Sub = 1,
		Mul = 2,
		Set = 3,
	};
}
