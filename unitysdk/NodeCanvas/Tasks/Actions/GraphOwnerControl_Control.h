#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl_Control_TypeDefinitionIndex = 29962;

	enum class GraphOwnerControl_Control : ::System::Int32
	{
		StopBehaviour = 1,
		PauseBehaviour = 2,
		StartBehaviour = 0,
	};
}
