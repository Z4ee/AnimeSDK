#pragma once
#include "unitysdk/unitysdk.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineDrawMode_TypeDefinitionIndex = 27381;

	enum class PipeSplineDrawMode : ::System::Int32
	{
		InstancedIndirect = 1,
		Instanced = 0,
	};
}
