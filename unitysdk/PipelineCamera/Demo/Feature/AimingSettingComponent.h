#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Demo/Movement/DemoMovementDirection.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingParam.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { template <typename T> class ICameraController_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineSetting; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPlayerController; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define PIPELINECAMERA_DEMO_FEATURE_AIMINGSETTINGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B487770)

namespace PipelineCamera::Demo::Feature
{
	inline static constexpr unsigned int AimingSettingComponent_TypeDefinitionIndex = 36145;

	class AimingSettingComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting* aimingSetting; // 0x18
		::System::Single aimingBlendDuration; // 0x20
		::PipelineCamera::ScopedDelegateHandle _clearAimingCamera; // 0x28
		::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::Module::DefaultFollowSettingParam>* _aimingSetting; // 0x30
		::PipelineCamera::ICameraDataBlenderBuilder* _aimingBlender; // 0x38
		::PipelineCamera::ICameraController_1<::PipelineCamera::Demo::Pipeline::DemoFollowPlayerController*>* _cameraController; // 0x40
		::System::Action_2<::PipelineCamera::Demo::Movement::DemoMovementDirection, ::PipelineCamera::Demo::Movement::DemoMovementDirection>* _onMovementDirectionChanged; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_FEATURE_AIMINGSETTINGCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
