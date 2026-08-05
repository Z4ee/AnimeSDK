#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingParam.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineSetting; }
namespace System { class String; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E9150D0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM__ONCONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E9151D0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9150C0)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineConfig_BuildFollowSetting_TypeDefinitionIndex = 38431;

	class DemoFollowPipelineConfig_BuildFollowSetting : public ::System::Object
	{
	public:
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting* _setting; // 0x10
		::System::String* _debugName; // 0x18
		::System::Nullable_1<::System::Single> _aspectRatio; // 0x20

		::System::Void _ctor(::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting* setting, ::System::Nullable_1<::System::Single> aspectRatio, ::System::String* debugName)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting*, ::System::Nullable_1<::System::Single>, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING__CTOR_OFFSET))(this, setting, aspectRatio, debugName);
		}

		::PipelineCamera::ICameraSubModule_1<::PipelineCamera::Module::DefaultFollowSettingParam>* PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_Module_DefaultFollowSettingParam__Construct()
		{
			return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::Module::DefaultFollowSettingParam>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM__CONSTRUCT_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraSubModuleBuilder_PipelineCamera_Module_DefaultFollowSettingParam__OnConstruct(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::Module::DefaultFollowSettingParam>* subModule)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::Module::DefaultFollowSettingParam>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_BUILDFOLLOWSETTING_PIPELINECAMERA_ICAMERASUBMODULEBUILDER_PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTINGPARAM__ONCONSTRUCT_OFFSET))(this, subModule);
		}
	};
}
