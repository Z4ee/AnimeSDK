#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/Module/DefaultRotationInputConfig.h"
#include "unitysdk/PipelineCamera/Module/DefaultRotationInputParam.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { template <typename T> class CameraSubModuleContainer_1; }

#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_BUILDCAMERACOMMANDHANDLER_OFFSET UNITYSDK_OFFSET(0x1F623610)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_GET_ROTATIONINPUT_OFFSET UNITYSDK_OFFSET(0x1F622D90)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F6239A0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1F623B20)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F623A30)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F623EE0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F623FA0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET UNITYSDK_OFFSET(0x1F623950)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1F6238B0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET UNITYSDK_OFFSET(0x1F623900)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1F623E50)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1F623AC0)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET UNITYSDK_OFFSET(0x1F624000)
#define PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F623520)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int DefaultRotationInput_TypeDefinitionIndex = 38660;

	class DefaultRotationInput : public ::System::Object
	{
	public:
		::PipelineCamera::CameraSubModuleContainer_1<::PipelineCamera::Module::DefaultRotationInputParam>* _subModules; // 0x10
		::PipelineCamera::Module::DefaultRotationInputParam _cachedOutput; // 0x18
		::System::Nullable_1<::UnityEngine::Quaternion> _cachedRotationInput; // 0x70
		::System::Int32 _pipelineId; // 0x84
		::Foundation::Unreal::FName _moduleId; // 0x88
		::UnityEngine::Vector3 _defaultRotationSpeed; // 0x90

		::System::Void _ctor(::System::Int32 priorityCount, ::PipelineCamera::Module::DefaultRotationInputConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PipelineCamera::Module::DefaultRotationInputConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT__CTOR_OFFSET))(this, priorityCount, config, context);
		}

		::UnityEngine::Quaternion get_RotationInput()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_GET_ROTATIONINPUT_OFFSET))(this);
		}

		::System::Void BuildCameraCommandHandler(::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_BUILDCAMERACOMMANDHANDLER_OFFSET))(this, context);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraModule_get_ModuleId()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraModule_get_PipelineType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET))(this);
		}

		::PipelineCamera::CameraModuleFlag PipelineCamera_ICameraModule_GetModuleFlag()
		{
			return ((::PipelineCamera::CameraModuleFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraModule_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Collect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET))(this, context, externalValue);
		}

		::System::Void PipelineCamera_ICameraModule_PostCollect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET))(this, context, externalValue);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraModule_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraModule_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_DEFAULTROTATIONINPUT_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET))(this, context);
		}
	};
}
