#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraPipeline_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera::Module { class InPlaceBlender; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0x1E915630)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG_PIPELINECAMERA_ICAMERAPIPELINECONFIG_PIPELINECAMERA_MODULE_INPLACEBLENDER__INITMODULE1_OFFSET UNITYSDK_OFFSET(0x1E9154F0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9156F0)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPostPipelineConfig_TypeDefinitionIndex = 38428;

	class DemoFollowPostPipelineConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraPipelineConfig_PipelineCamera_Module_InPlaceBlender__InitModule1(::PipelineCamera::Module::InPlaceBlender*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlender*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG_PIPELINECAMERA_ICAMERAPIPELINECONFIG_PIPELINECAMERA_MODULE_INPLACEBLENDER__INITMODULE1_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void InitPipeline(::PipelineCamera::CameraPipeline_1<::PipelineCamera::Module::InPlaceBlender*>& pipeline, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraPipeline_1<::PipelineCamera::Module::InPlaceBlender*>&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPOSTPIPELINECONFIG_INITPIPELINE_OFFSET))(this, pipeline, pipelineId, context);
		}
	};
}
