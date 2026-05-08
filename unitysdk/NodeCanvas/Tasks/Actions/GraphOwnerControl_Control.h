#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl_Control_TypeDefinitionIndex = 27551;

	enum class GraphOwnerControl_Control : ::System::Int32
	{
		StartBehaviour = 0,
		PauseBehaviour = 2,
		StopBehaviour = 1,
	};
}
