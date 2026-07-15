#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameValueCalculateType_TypeDefinitionIndex = 23700;

	enum class LittleGameValueCalculateType : ::System::Int32
	{
		Add = 0,
		Sub = 1,
		Mul = 2,
		Div = 3,
	};
}
