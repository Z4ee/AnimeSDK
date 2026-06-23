#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87AEA0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET___C__DISPLAYCLASS3_0__PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__ONCONSTRUCT_B__0_OFFSET UNITYSDK_OFFSET(0x1D87AEB0)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineConfig_BuildFollowTarget___c__DisplayClass3_0_TypeDefinitionIndex = 37772;

	class DemoFollowPipelineConfig_BuildFollowTarget___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* followTarget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::PipelineCamera::CameraFollowTargetParam _PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_CameraFollowTargetParam__OnConstruct_b__0()
		{
			return ((::PipelineCamera::CameraFollowTargetParam(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET___C__DISPLAYCLASS3_0__PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__ONCONSTRUCT_B__0_OFFSET))(this);
		}
	};
}
