#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortDirection_TypeDefinitionIndex = 70527;

	enum class GraphPortDirection : ::System::Int32
	{
		Out = 1,
		In = 0,
	};
}
