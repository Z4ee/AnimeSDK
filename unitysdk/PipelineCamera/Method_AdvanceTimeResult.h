#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_AdvanceTimeResult_TypeDefinitionIndex = 37489;

	enum class Method_AdvanceTimeResult : ::System::Int32
	{
		Default = 0,
		Looped = 1,
		Finished = 2,
	};
}
