#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/BaseCameraController_2.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T1, typename T2, typename T3> class CameraController_3; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera { template <typename T> class ICameraPipelineBuilder_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_3_TypeDefinitionIndex = 35899;

	template <typename TPlayerController, typename TPostPipeline, typename T1>
	class CameraController_3 : public ::PipelineCamera::BaseCameraController_2<TPlayerController, TPostPipeline>
	{
	public:
		T1 _pipeline1; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_3<TPlayerController, TPostPipeline, T1>*, TPlayerController>* _cameraContext; // 0x0
	};
}
