#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionCompiler_ExpressionMode_TypeDefinitionIndex = 69324;

	enum class ExpressionCompiler_ExpressionMode : ::System::Int32
	{
		V2 = 1,
		V1 = 0,
		DoubleCheck = 2,
	};
}
