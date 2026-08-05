#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class ICameraWritableCollectContext; }
namespace System { class String; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraPipelineHelper_TypeDefinitionIndex = 38183;

	class CameraPipelineHelper : public ::System::Object
	{
	public:
		// static const ::System::String* ExceptionWrongModuleIndex; // 0x0
	};
}
