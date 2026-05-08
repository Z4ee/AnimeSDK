#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraFollowTargetParam.h"
#include "unitysdk/PipelineCamera/CameraPipeline_5.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::Demo::Pipeline { class DemoFollowPipelineSetting; }
namespace PipelineCamera::Module { class DefaultFollowInitializer; }
namespace PipelineCamera::Module { class DefaultFollowSetting; }
namespace PipelineCamera::Module { class DefaultFollowTarget; }
namespace PipelineCamera::Module { class DefaultRotationInput; }
namespace PipelineCamera::Module { class WorldBasicCameraDataModifier; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_GET_COREDATASUBMODULES_OFFSET UNITYSDK_OFFSET(0x1B487AC0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_GET_FOLLOWTARGETSUBMODULES_OFFSET UNITYSDK_OFFSET(0x1B4877C0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_INITPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B488E40)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_1_OFFSET UNITYSDK_OFFSET(0x1B487DD0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_2_OFFSET UNITYSDK_OFFSET(0x1B4880C0)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_3_OFFSET UNITYSDK_OFFSET(0x1B488430)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_4_OFFSET UNITYSDK_OFFSET(0x1B488A30)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_OFFSET UNITYSDK_OFFSET(0x1B487B40)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B488F50)
#define PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B488F30)

namespace PipelineCamera::Demo::Pipeline
{
	inline static constexpr unsigned int DemoFollowPipelineConfig_TypeDefinitionIndex = 36161;

	class DemoFollowPipelineConfig : public ::System::Object
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet_PipelineStageModifier()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DemoFollowPipelineConfig_TypeDefinitionIndex)->GetStaticField(0x8770);
		}
		static ::Foundation::Unreal::FName* StaticGet_PipelineStageTarget()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DemoFollowPipelineConfig_TypeDefinitionIndex)->GetStaticField(0x8778);
		}
		static ::Foundation::Unreal::FName* StaticGet_PipelineStageSetting()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DemoFollowPipelineConfig_TypeDefinitionIndex)->GetStaticField(0x8780);
		}
		static ::Foundation::Unreal::FName* StaticGet_PipelineStageInput()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DemoFollowPipelineConfig_TypeDefinitionIndex)->GetStaticField(0x8788);
		}
		static ::Foundation::Unreal::FName* StaticGet_PipelineStageInitializer()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(DemoFollowPipelineConfig_TypeDefinitionIndex)->GetStaticField(0x8790);
		}
		::PipelineCamera::Demo::Pipeline::DemoFollowPipelineSetting* defaultSetting; // 0x10
		::System::Single defaultPitch; // 0x18
		::System::Single minPitch; // 0x1C
		::System::Single maxPitch; // 0x20
		::UnityEngine::Transform* followTarget; // 0x28
		::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::CameraFollowTargetParam>*>>* _followTargetSubModules; // 0x30
		::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*>>* _coreDataSubModules; // 0x38
		::System::Action_1<::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*>* OnDamperBuild; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::CameraFollowTargetParam>*>>* get_FollowTargetSubModules()
		{
			return ((::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::CameraFollowTargetParam>*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_GET_FOLLOWTARGETSUBMODULES_OFFSET))(this);
		}

		::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*>>* get_CoreDataSubModules()
		{
			return ((::Il2CppArray<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_GET_COREDATASUBMODULES_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICam(::PipelineCamera::Module::DefaultFollowInitializer*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::DefaultFollowInitializer*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void PipelineCamera_ICam_1(::PipelineCamera::Module::WorldBasicCameraDataModifier*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::WorldBasicCameraDataModifier*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_1_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void PipelineCamera_ICam_2(::PipelineCamera::Module::DefaultRotationInput*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::DefaultRotationInput*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_2_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void PipelineCamera_ICam_3(::PipelineCamera::Module::DefaultFollowTarget*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::DefaultFollowTarget*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_3_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void PipelineCamera_ICam_4(::PipelineCamera::Module::DefaultFollowSetting*& module, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::DefaultFollowSetting*&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_PIPELINECAMERA_ICAM_4_OFFSET))(this, module, pipelineId, context);
		}

		::System::Void InitPipeline(::PipelineCamera::CameraPipeline_5<::PipelineCamera::Module::DefaultFollowInitializer*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::DefaultRotationInput*, ::PipelineCamera::Module::DefaultFollowTarget*, ::PipelineCamera::Module::DefaultFollowSetting*>& pipeline, ::System::Int32 pipelineId, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraPipeline_5<::PipelineCamera::Module::DefaultFollowInitializer*, ::PipelineCamera::Module::WorldBasicCameraDataModifier*, ::PipelineCamera::Module::DefaultRotationInput*, ::PipelineCamera::Module::DefaultFollowTarget*, ::PipelineCamera::Module::DefaultFollowSetting*>&, ::System::Int32, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DEMO_PIPELINE_DEMOFOLLOWPIPELINECONFIG_INITPIPELINE_OFFSET))(this, pipeline, pipelineId, context);
		}
	};
}
