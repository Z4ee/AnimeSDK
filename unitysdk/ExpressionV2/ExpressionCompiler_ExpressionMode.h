#pragma once
#include "unitysdk/unitysdk.h"

namespace ExpressionV2
{
	inline static constexpr unsigned int ExpressionCompiler_ExpressionMode_TypeDefinitionIndex = 45867;

	enum class ExpressionCompiler_ExpressionMode : ::System::Int32
	{
		V1 = 0,
		V2 = 1,
		DoubleCheck = 2,
	};
}
