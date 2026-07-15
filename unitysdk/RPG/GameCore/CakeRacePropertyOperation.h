#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePropertyOperation_TypeDefinitionIndex = 17594;

	enum class CakeRacePropertyOperation : ::System::Int32
	{
		None = 0,
		Add = 1,
		Replace = 2,
		Multiply = 3,
		Devide = 4,
		Sub = 5,
	};
}
