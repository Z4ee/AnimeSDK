#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int Method_AdvanceTimeResult_TypeDefinitionIndex = 35881;

	enum class Method_AdvanceTimeResult : ::System::Int32
	{
		Default = 0,
		Looped = 1,
		Finished = 2,
	};
}
