#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamExprType_TypeDefinitionIndex = 16398;

	enum class ParamExprType : ::System::Int32
	{
		Unknown = 0,
		Add = 1,
		Sub = 2,
		Mul = 3,
		Max = 4,
		Min = 5,
		Div = 6,
		Mod = 7,
	};
}
