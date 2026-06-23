#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineConfig; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1D8363A0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__ONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1D8365B0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D834E10)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineConfig_BuildFollowTarget_TypeDefinitionIndex = 37771;

	class DemoFollowPipelineConfig_BuildFollowTarget : public ::System::Object
	{
	public:
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineConfig* _ownerConfig; // 0x10

		::System::Void _ctor(::PipelineCamera::Demo::Pipeline::DemoFollowPipelineConfig* ownerConfig)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Demo::Pipeline::DemoFollowPipelineConfig*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET__CTOR_OFFSET))(this, ownerConfig);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::CameraFollowTargetParam>* PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_CameraFollowTargetParam__Construct()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::CameraFollowTargetParam>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__CONSTRUCT_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_CameraFollowTargetParam__OnConstruct(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::CameraFollowTargetParam>* subModule)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::CameraFollowTargetParam>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWTARGET_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_CAMERAFOLLOWTARGETPARAM__ONCONSTRUCT_OFFSET))(this, subModule);
		}
	};
}
