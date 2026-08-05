#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraExternalValueCollection.h"
#include "unitysdk/PipelineCamera/CameraModuleFlag.h"
#include "unitysdk/PipelineCamera/Module/SimpleLastDataCacheConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraCommonContext; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTouchContext; }

#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EBCC2B0)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_GETLASTDATACACHE_OFFSET UNITYSDK_OFFSET(0x1EBCC370)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1EBCC4B0)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET UNITYSDK_OFFSET(0x1EBCC630)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1EBCC510)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1EBCC750)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBCC800)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET UNITYSDK_OFFSET(0x1EBCC460)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0x1EBCC3E0)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET UNITYSDK_OFFSET(0x1EBCC420)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET UNITYSDK_OFFSET(0x1EBCC6C0)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1EBCC5A0)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET UNITYSDK_OFFSET(0x1EBCC890)
#define PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBCC260)

namespace PipelineCamera::Module
{
	inline static constexpr unsigned int SimpleLastDataCache_TypeDefinitionIndex = 38665;

	class SimpleLastDataCache : public ::System::Object
	{
	public:
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> _lastData; // 0x10
		::System::Int32 _pipelineId; // 0x40
		::Foundation::Unreal::FName _moduleId; // 0x44

		::System::Void _ctor(::PipelineCamera::Module::SimpleLastDataCacheConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::Module::SimpleLastDataCacheConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE__CTOR_OFFSET))(this, config, context);
		}

		static ::PipelineCamera::Module::SimpleLastDataCache* Create(::PipelineCamera::Module::SimpleLastDataCacheConfig& config, ::PipelineCamera::ICameraCommonContext* context)
		{
			return ((::PipelineCamera::Module::SimpleLastDataCache*(*)(::PipelineCamera::Module::SimpleLastDataCacheConfig&, ::PipelineCamera::ICameraCommonContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_CREATE_OFFSET))(config, context);
		}

		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> GetLastDataCache()
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_GETLASTDATACACHE_OFFSET))(this);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraModule_get_ModuleId()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GET_MODULEID_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraModule_get_PipelineType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GET_PIPELINETYPE_OFFSET))(this);
		}

		::PipelineCamera::CameraModuleFlag PipelineCamera_ICameraModule_GetModuleFlag()
		{
			return ((::PipelineCamera::CameraModuleFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_GETMODULEFLAG_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraModule_Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Collect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_COLLECT_OFFSET))(this, context, externalValue);
		}

		::System::Void PipelineCamera_ICameraModule_PostCollect(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::CameraExternalValueCollection& externalValue)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::CameraExternalValueCollection&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_POSTCOLLECT_OFFSET))(this, context, externalValue);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraModule_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_EVALUATE_OFFSET))(this, cameraData, context);
		}

		::System::Void PipelineCamera_ICameraModule_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraModule_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_MODULE_SIMPLELASTDATACACHE_PIPELINECAMERA_ICAMERAMODULE_TOUCH_OFFSET))(this, context);
		}
	};
}
