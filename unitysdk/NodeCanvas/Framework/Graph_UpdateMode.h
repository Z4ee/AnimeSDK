#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph_UpdateMode_TypeDefinitionIndex = 29259;

	enum class Graph_UpdateMode : ::System::Int32
	{
		NormalUpdate = 0,
		FixedUpdate = 2,
		Manual = 3,
		LateUpdate = 1,
	};
}
