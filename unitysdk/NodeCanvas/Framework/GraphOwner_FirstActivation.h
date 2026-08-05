#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_FirstActivation_TypeDefinitionIndex = 31208;

	enum class GraphOwner_FirstActivation : ::System::Int32
	{
		Async = 2,
		OnEnable = 0,
		OnStart = 1,
	};
}
