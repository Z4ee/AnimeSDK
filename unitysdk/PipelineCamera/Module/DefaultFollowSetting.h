#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingConfig.h"
#include "unitysdk/PipelineCamera/Module/DefaultFollowSettingParam.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }
namespace PipelineCamera { template <typename T> class ICameraSubModuleBuilder_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_BUILDCAMERACOMMANDHANDLER_OFFSET UNITYSDK_OFFSET(0x1F236DF0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_GET_SETTING_OFFSET UNITYSDK_OFFSET(0x1F236D30)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_INITSUBMODULE_OFFSET UNITYSDK_OFFSET(0x1F237080)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F2374C0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1F237640)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F237550)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F237790)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F237850)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET UNITYSDK_OFFSET(0x1F237470)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1F2373F0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET UNITYSDK_OFFSET(0x1F237430)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1F237700)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1F2375E0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET UNITYSDK_OFFSET(0x1F2378B0)
#define PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F236D50)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultFollowSetting_TypeDefinitionIndex = 38672;

	class DefaultFollowSetting : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::Module::DefaultFollowSettingParam>* _subModules; // 0x10
		::Foundation::Unreal::FName _moduleId; // 0x18
		::PipelineCamera::Module::DefaultFollowSettingParam _cachedOutput; // 0x20
		::PipelineCamera::Module::DefaultFollowSettingParam _defaultDefaultFollowSetting; // 0x38
		::System::Int32 _pipelineId; // 0x50

		::System::Void _ctor(::System::Int32 priorityCount, ::PipelineCamera::Module::DefaultFollowSettingConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PipelineCamera::Module::DefaultFollowSettingConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING__CTOR_OFFSET))(this, priorityCount, config, context);
		}

		::PipelineCamera::Module::DefaultFollowSettingParam get_Setting()
		{
			return ((::PipelineCamera::Module::DefaultFollowSettingParam(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_GET_SETTING_OFFSET))(this);
		}

		::System::Void BuildCameraCommandHandler(::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_BUILDCAMERACOMMANDHANDLER_OFFSET))(this, context);
		}

		::System::Void InitSubModule(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::Module::DefaultFollowSettingParam>*>>* builders)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::Module::DefaultFollowSettingParam>*>>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_INITSUBMODULE_OFFSET))(this, builders);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraModule_get_ModuleId()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraModule_get_PipelineType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET))(this);
		}

		::PipelineCamera::CameraModuleFlag PipelineCamera_ICameraModule_GetModuleFlag()
		{
			return ((::PipelineCamera::CameraModuleFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraModule_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Collect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET))(this, context, externalValue);
		}

		::System::Void PipelineCamera_ICameraModule_PostCollect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET))(this, context, externalValue);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraModule_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraModule_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTFOLLOWSETTING_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET))(this, context);
		}
	};
}
