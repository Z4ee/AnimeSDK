#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortDirection_TypeDefinitionIndex = 41228;

	enum class GraphPortDirection : ::System::Int32
	{
		Out = 1,
		In = 0,
	};
}
