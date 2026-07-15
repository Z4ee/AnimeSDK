#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamUnaryExprType_TypeDefinitionIndex = 16400;

	enum class ParamUnaryExprType : ::System::Int32
	{
		Unknown = 0,
		Negative = 1,
		Abs = 2,
	};
}
