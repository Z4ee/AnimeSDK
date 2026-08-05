#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/CameraSubModuleEvaluateContext_1.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/PipelineCamera/Module/WorldBasicCameraDataChannel.h"
#include "unitysdk/PipelineCamera/SubModule/LerpToTargetInCoreConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraPrepareContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_GET_CURRENTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1F32BA00)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_1_OFFSET UNITYSDK_OFFSET(0x1F32B580)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_2_OFFSET UNITYSDK_OFFSET(0x1F32B680)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_3_OFFSET UNITYSDK_OFFSET(0x1F32B780)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_4_OFFSET UNITYSDK_OFFSET(0x1F32B870)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_5_OFFSET UNITYSDK_OFFSET(0x1F32B940)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_OFFSET UNITYSDK_OFFSET(0x1F32B460)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F32BB40)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__COLLECT_OFFSET UNITYSDK_OFFSET(0x1F32BC30)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1F32BB90)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F32BD50)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__FLUSH_OFFSET UNITYSDK_OFFSET(0x1F32C420)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__PREPARE_OFFSET UNITYSDK_OFFSET(0x1F32BBE0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__TOUCH_OFFSET UNITYSDK_OFFSET(0x1F32C480)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x1F32BA50)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1F32BAF0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F32BA10)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__PROCESSACTIVECHANNEL_OFFSET UNITYSDK_OFFSET(0x1F32BAA0)
#define PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F32B400)

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int LerpToTargetInCore_TypeDefinitionIndex = 38685;

	class LerpToTargetInCore : public ::System::Object
	{
	public:
		::PipelineCamera::ICameraTimestamp* _timestamp; // 0x10
		::PipelineCamera::TimeBasedAlphaGenerator* _alphaGenerator; // 0x18
		::Foundation::Variable_1<::PipelineCamera::WorldBasicCameraData> _targetData; // 0x20
		::System::Int32 _priority; // 0x60
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> _sourceData; // 0x64
		::PipelineCamera::Module::WorldBasicCameraDataChannel _activeChannel; // 0x94
		::System::Single _deltaTime; // 0x98
		::Foundation::Unreal::FName _debugName; // 0x9C
		::System::Single _currentTimestamp; // 0xA4

		::System::Void _ctor(::PipelineCamera::SubModule::LerpToTargetInCoreConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::SubModule::LerpToTargetInCoreConfig&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE__CTOR_OFFSET))(this, config);
		}

		::System::Void Lerp(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_OFFSET))(this, source, target, duration, easingFunc, metaParam);
		}

		::System::Void Lerp_1(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_1_OFFSET))(this, source, target, duration, easingFunc, metaParam);
		}

		::System::Void Lerp_2(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_2_OFFSET))(this, source, target, duration, curve);
		}

		::System::Void Lerp_3(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::System::Single duration, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_3_OFFSET))(this, source, target, duration, curve);
		}

		::System::Void Lerp_4(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target, ::PipelineCamera::TimeBasedAlphaGenerator* alphaGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_4_OFFSET))(this, source, target, alphaGenerator);
		}

		::System::Void Lerp_5(::PipelineCamera::WorldBasicCameraData& source, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>* target, ::PipelineCamera::TimeBasedAlphaGenerator* alphaGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::System::Func_1<::PipelineCamera::WorldBasicCameraData>*, ::PipelineCamera::TimeBasedAlphaGenerator*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_LERP_5_OFFSET))(this, source, target, alphaGenerator);
		}

		::System::Single get_CurrentTimestamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_GET_CURRENTTIMESTAMP_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETPRIORITY_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetActiveChannel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETACTIVECHANNEL_OFFSET))(this);
		}

		::System::Int32 PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__ProcessActiveChannel(::System::Int32 channel)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__PROCESSACTIVECHANNEL_OFFSET))(this, channel);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraSubModule_PipelineCamera_WorldBasicCameraData__GetDebugName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULE_PIPELINECAMERA_WORLDBASICCAMERADATA__GETDEBUGNAME_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Activate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__ACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Deactivate(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__DEACTIVATE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Prepare(::PipelineCamera::ICameraPrepareContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraPrepareContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__PREPARE_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__COLLECT_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Evaluate(::PipelineCamera::WorldBasicCameraData& inputData, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>& context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::CameraSubModuleEvaluateContext_1<::PipelineCamera::WorldBasicCameraData>&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__EVALUATE_OFFSET))(this, inputData, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraSubModuleInternal_PipelineCamera_WorldBasicCameraData__Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SUBMODULE_LERPTOTARGETINCORE_PIPELINECAMERA_ICAMERASUBMODULEINTERNAL_PIPELINECAMERA_WORLDBASICCAMERADATA__TOUCH_OFFSET))(this, context);
		}
	};
}
