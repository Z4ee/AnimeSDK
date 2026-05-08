#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Graph_UpdateMode_TypeDefinitionIndex = 27744;

	enum class Graph_UpdateMode : ::System::Int32
	{
		FixedUpdate = 2,
		LateUpdate = 1,
		Manual = 3,
		NormalUpdate = 0,
	};
}
