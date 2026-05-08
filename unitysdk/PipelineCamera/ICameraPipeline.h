#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class ICameraWritableCollectContext; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ICameraPipeline_TypeDefinitionIndex = 35982;

	class ICameraPipeline
	{
	public:
	};
}
