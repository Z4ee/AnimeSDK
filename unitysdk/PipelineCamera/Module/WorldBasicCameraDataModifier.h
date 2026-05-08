#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataModifierConfig.h"
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

#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_BUILDCAMERACOMMANDHANDLER_OFFSET UNITYSDK_OFFSET(0x1B507310)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_INITSUTMODULE_OFFSET UNITYSDK_OFFSET(0x1B506A50)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B506EB0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1B507030)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B506F40)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B507130)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B5071D0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET UNITYSDK_OFFSET(0x1B506E60)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1B506DE0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET UNITYSDK_OFFSET(0x1B506E20)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1B5070A0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B506FD0)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET UNITYSDK_OFFSET(0x1B507230)
#define PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B507290)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int WorldBasicCameraDataModifier_TypeDefinitionIndex = 36399;

	class WorldBasicCameraDataModifier : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::WorldBasicCameraData>* _subModules; // 0x10
		::System::Int32 _pipelineId; // 0x18
		::Foundation::Unreal::FName _moduleId; // 0x1C

		::System::Void _ctor(::System::Int32 priorityCount, ::PipelineCamera::Module::WorldBasicCameraDataModifierConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PipelineCamera::Module::WorldBasicCameraDataModifierConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER__CTOR_OFFSET))(this, priorityCount, config, context);
		}

		::System::Void InitSutModule(::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*>>* builders)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::UInt64, ::PipelineCamera::ICameraSubModuleBuilder_1<::PipelineCamera::WorldBasicCameraData>*>>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_INITSUTMODULE_OFFSET))(this, builders);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraModule_get_ModuleId()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraModule_get_PipelineType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET))(this);
		}

		::PipelineCamera::CameraModuleFlag PipelineCamera_ICameraModule_GetModuleFlag()
		{
			return ((::PipelineCamera::CameraModuleFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraModule_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Collect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET))(this, context, externalValue);
		}

		::System::Void PipelineCamera_ICameraModule_PostCollect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET))(this, context, externalValue);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraModule_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraModule_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET))(this, context);
		}

		::System::Void BuildCameraCommandHandler(::PipelineCamera::Module::WorldBasicCameraDataModifierConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::WorldBasicCameraDataModifierConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_WORLDBASICCAMERADATAMODIFIER_BUILDCAMERACOMMANDHANDLER_OFFSET))(this, config, context);
		}
	};
}
