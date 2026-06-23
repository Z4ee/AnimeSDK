#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/BaseCameraController_2.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraController_2; }
namespace PipelineCamera { template <typename T> class ICameraPipelineBuilder_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_2_TypeDefinitionIndex = 37508;

	template <typename TPlayerController, typename TPostPipeline>
	class CameraController_2 : public ::PipelineCamera::BaseCameraController_2<TPlayerController, TPostPipeline>
	{
	public:
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_2<TPlayerController, TPostPipeline>*, TPlayerController>* _cameraContext; // 0x0
	};
}
