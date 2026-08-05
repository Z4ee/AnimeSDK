#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera::Module { class InPlaceBlender; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ICameraDataBlenderInternal_TypeDefinitionIndex = 38243;

	class ICameraDataBlenderInternal
	{
	public:
	};
}
