#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineConfig; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPlayerController; }
namespace UnityEngine { class Camera; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B11F8C0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11F8D0)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineController_TypeDefinitionIndex = 36165;

	class DemoFollowPipelineController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Camera* _camera; // 0x18
		::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>* _cameraController; // 0x20
		::System::Boolean _isCameraNull; // 0x28
		::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController* _playerController; // 0x30
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineConfig* demoConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>* get_Controller()
		{
			return ((::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONTROLLER_GET_CONTROLLER_OFFSET))(this);
		}
	};
}
