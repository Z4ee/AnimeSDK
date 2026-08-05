#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineType_TypeDefinitionIndex = 38425;

	enum class DemoFollowPipelineType : ::System::Int32
	{
		Follow = 0,
		Count = 1,
		PostProcessing = -1,
	};
}
