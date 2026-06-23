#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl_Control_TypeDefinitionIndex = 29735;

	enum class GraphOwnerControl_Control : ::System::Int32
	{
		PauseBehaviour = 2,
		StartBehaviour = 0,
		StopBehaviour = 1,
	};
}
