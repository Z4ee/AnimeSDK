#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPortType_TypeDefinitionIndex = 57175;

	enum class GraphPortType : ::System::Int32
	{
		Flow = 0,
		Value = 1,
	};
}
