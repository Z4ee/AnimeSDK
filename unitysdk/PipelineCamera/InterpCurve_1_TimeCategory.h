#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurve_1_TimeCategory_TypeDefinitionIndex = 38345;

	enum class InterpCurve_1_TimeCategory : ::System::Int32
	{
		OnlySuccessor = 0,
		OnlyPredecessor = 1,
		Both = 2,
	};
}
