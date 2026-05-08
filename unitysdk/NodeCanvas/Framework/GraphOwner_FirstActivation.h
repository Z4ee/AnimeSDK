#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphOwner_FirstActivation_TypeDefinitionIndex = 27873;

	enum class GraphOwner_FirstActivation : ::System::Int32
	{
		OnEnable = 0,
		OnStart = 1,
		Async = 2,
	};
}
