#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/Module/InPlaceBlenderConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraDataBlenderBuilder; }
namespace PipelineCamera { class ICameraDataBlenderInternal; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }

#define PIPELINECAMERA_MODULE_INPLACEBLENDER_BUILDBLENDER_OFFSET UNITYSDK_OFFSET(0x1B123BB0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_CANCELBLENDINGREQUEST_OFFSET UNITYSDK_OFFSET(0x1B122A30)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_CANCELBLENDING_OFFSET UNITYSDK_OFFSET(0x1B122A80)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_CLEARBLENDER_OFFSET UNITYSDK_OFFSET(0x1B123E90)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_CONSUMEBLENDERBUILDER_OFFSET UNITYSDK_OFFSET(0x1B123FC0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B1235D0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_GET_LASTOUTPUT_OFFSET UNITYSDK_OFFSET(0x1B1229B0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_HANDLECURRENTBLENDER_OFFSET UNITYSDK_OFFSET(0x1B1239F0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_HANDLENEWBLENDER_OFFSET UNITYSDK_OFFSET(0x1B123670)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B122B90)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1B122D10)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1B122BF0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B123140)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1B123360)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET UNITYSDK_OFFSET(0x1B122B40)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1B122AC0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET UNITYSDK_OFFSET(0x1B122B00)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1B122EB0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B122C80)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET UNITYSDK_OFFSET(0x1B123480)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER_REQUESTBLENDING_OFFSET UNITYSDK_OFFSET(0x1B1229D0)
#define PIPELINECAMERA_MODULE_INPLACEBLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1235A0)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int InPlaceBlender_TypeDefinitionIndex = 36394;

	class InPlaceBlender : public ::System::Object
	{
	public:
		::PipelineCamera::ICameraDataBlenderBuilder* _currentBlenderBuilder; // 0x10
		::PipelineCamera::ICameraDataBlenderInternal* _currentBlender; // 0x18
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> _cachedOutput; // 0x20
		::System::Boolean _cancelBlending; // 0x50
		::Foundation::Unreal::FName _moduleId; // 0x54
		::System::Int32 _pipelineId; // 0x5C

		::System::Void _ctor(::PipelineCamera::Module::InPlaceBlenderConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::InPlaceBlenderConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER__CTOR_OFFSET))(this, config, context);
		}

		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> get_LastOutput()
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_GET_LASTOUTPUT_OFFSET))(this);
		}

		::System::Void RequestBlending(::PipelineCamera::ICameraDataBlenderBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlenderBuilder*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_REQUESTBLENDING_OFFSET))(this, builder);
		}

		::System::Void CancelBlendingRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_CANCELBLENDINGREQUEST_OFFSET))(this);
		}

		::System::Void CancelBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_CANCELBLENDING_OFFSET))(this);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraModule_get_ModuleId()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraModule_get_PipelineType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET))(this);
		}

		::PipelineCamera::CameraModuleFlag PipelineCamera_ICameraModule_GetModuleFlag()
		{
			return ((::PipelineCamera::CameraModuleFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraModule_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Collect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET))(this, context, externalValue);
		}

		::System::Void PipelineCamera_ICameraModule_PostCollect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET))(this, context, externalValue);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraModule_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraModule_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET))(this, context);
		}

		static ::PipelineCamera::Module::InPlaceBlender* Create(::PipelineCamera::Module::InPlaceBlenderConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::PipelineCamera::Module::InPlaceBlender*(*)(::PipelineCamera::Module::InPlaceBlenderConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_CREATE_OFFSET))(config, context);
		}

		::System::Void HandleNewBlender(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_HANDLENEWBLENDER_OFFSET))(this, context);
		}

		::System::Void HandleCurrentBlender(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_HANDLECURRENTBLENDER_OFFSET))(this, context);
		}

		::System::Void BuildBlender(::PipelineCamera::ICameraDataBlenderBuilder* builder, ::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraDataBlenderBuilder*, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_BUILDBLENDER_OFFSET))(this, builder, context);
		}

		::System::Void ClearBlender(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_CLEARBLENDER_OFFSET))(this, context);
		}

		::PipelineCamera::ICameraDataBlenderBuilder* ConsumeBlenderBuilder()
		{
			return ((::PipelineCamera::ICameraDataBlenderBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_INPLACEBLENDER_CONSUMEBLENDERBUILDER_OFFSET))(this);
		}
	};
}
