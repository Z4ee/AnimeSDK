#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int ICameraCollisionResolver_TypeDefinitionIndex = 36411;

	class ICameraCollisionResolver
	{
	public:
	};
}
