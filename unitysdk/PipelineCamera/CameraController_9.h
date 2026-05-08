#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/BaseCameraController_2.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCommand; }
namespace PipelineCamera { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class CameraController_9; }
namespace PipelineCamera { template <typename T1, typename T2> class CameraContext_2; }
namespace PipelineCamera { template <typename T> class ICameraPipelineBuilder_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraController_9_TypeDefinitionIndex = 35893;

	template <typename TPlayerController, typename TPostPipeline, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class CameraController_9 : public ::PipelineCamera::BaseCameraController_2<TPlayerController, TPostPipeline>
	{
	public:
		T1 _pipeline1; // 0x0
		T2 _pipeline2; // 0x0
		T3 _pipeline3; // 0x0
		T4 _pipeline4; // 0x0
		T5 _pipeline5; // 0x0
		T6 _pipeline6; // 0x0
		T7 _pipeline7; // 0x0
		::PipelineCamera::CameraContext_2<::PipelineCamera::CameraController_9<TPlayerController, TPostPipeline, T1, T2, T3, T4, T5, T6, T7>*, TPlayerController>* _cameraContext; // 0x0
	};
}
