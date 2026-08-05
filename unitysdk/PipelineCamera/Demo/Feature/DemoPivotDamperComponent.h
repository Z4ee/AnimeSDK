#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CriticalSpringDamper.h"
#include "unitysdk/PipelineCamera/Demo/Movement/DemoMovementDirection.h"
#include "unitysdk/PipelineCamera/PhysicalCriticalSpringDamper.h"
#include "unitysdk/PipelineCamera/VelocityBasedPositionDamper_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::SubModule { template <typename T> class PivotLocationDamper_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_WORLDBASICCAMERADATA__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1F236670)
#define PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_WORLDBASICCAMERADATA__ONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1F236730)
#define PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F236830)

namespace PipelineCamera::Demo::Feature
{
	inline static constexpr unsigned int DemoPivotDamperComponent_TypeDefinitionIndex = 38415;

	class DemoPivotDamperComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single verticalDamping; // 0x18
		::System::Single horizontalDamping; // 0x1C
		::UnityEngine::Transform* followTarget; // 0x20
		::PipelineCamera::SubModule::PivotLocationDamper_1<::PipelineCamera::VelocityBasedPositionDamper_3<::PipelineCamera::CriticalSpringDamper, ::PipelineCamera::PhysicalCriticalSpringDamper, ::PipelineCamera::CriticalSpringDamper>>* _damper; // 0x28
		::System::Action_2<::PipelineCamera::Demo::Movement::DemoMovementDirection, ::PipelineCamera::Demo::Movement::DemoMovementDirection>* _onMovementDirectionChanged; // 0x30
		::System::Action* _onControllerMoved; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT__CTOR_OFFSET))(this);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_WorldBasicCameraData__Construct()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_WORLDBASICCAMERADATA__CONSTRUCT_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_WorldBasicCameraData__OnConstruct(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* subModule)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_FEATURE_DEMOPIVOTDAMPERCOMPONENT_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_WORLDBASICCAMERADATA__ONCONSTRUCT_OFFSET))(this, subModule);
		}
	};
}
