#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDeltaData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera { class ICameraCollectContext; }
namespace PipelineCamera { class ICameraDataBlender; }
namespace PipelineCamera { class ICameraEvaluateContext; }
namespace PipelineCamera { class ICameraFlushContext; }
namespace PipelineCamera { class ICameraTimestamp; }
namespace PipelineCamera { class ICameraTouchContext; }
namespace PipelineCamera { class TimeBasedAlphaGenerator; }
namespace PipelineCamera::Module { class InPlaceBlender; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1D22F340)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMPINGROTATION_OFFSET UNITYSDK_OFFSET(0x1D22D4D0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_1_OFFSET UNITYSDK_OFFSET(0x1D22CF20)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_OFFSET UNITYSDK_OFFSET(0x1D22CE50)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_EASING_OFFSET UNITYSDK_OFFSET(0x1D22F020)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_INTERPCURVE_OFFSET UNITYSDK_OFFSET(0x1D22F1A0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D22DDE0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_COLLECT_OFFSET UNITYSDK_OFFSET(0x1D22E000)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1D22DFA0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1D22E520)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D22E280)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_TOUCH_OFFSET UNITYSDK_OFFSET(0x1D22E3A0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1D22DD90)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETREVERSEKEY_OFFSET UNITYSDK_OFFSET(0x1D22DD00)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1D22DCB0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1D22DC60)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_REVERSED_OFFSET UNITYSDK_OFFSET(0x1D22DD40)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D22D9D0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGETSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1D22DA40)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGET_OFFSET UNITYSDK_OFFSET(0x1D22D960)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETDAMPINGVALUE_OFFSET UNITYSDK_OFFSET(0x1D22DAB0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETFIXEDASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1D22DB10)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPITCHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1D22DBE0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPOSTEVALUATE_OFFSET UNITYSDK_OFFSET(0x1D22DB90)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D22EFF0)

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int AimingCameraDataBlender_TypeDefinitionIndex = 37986;

	class AimingCameraDataBlender : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single kLogNegligibleResidual; // 0x0
		::PipelineCamera::ICameraTimestamp* _cameraTimestamp; // 0x10
		::Foundation::Variable_1<::UnityEngine::Vector3> _aimingTarget; // 0x18
		::Foundation::Variable_1<::System::Boolean> _isAimingAllowed; // 0x38
		::PipelineCamera::TimeBasedAlphaGenerator* _alphaGenerator; // 0x50
		::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* _postEvaluate; // 0x58
		::PipelineCamera::WorldBasicCameraDataDeltaFlag _deltaFlag; // 0x60
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraDeltaData> _deltaCameraData; // 0x64
		::System::Single _timestamp; // 0xA0
		::System::Nullable_1<::System::Single> _fixedAspectRatio; // 0xA4
		::System::Boolean _isAimingAllowedValue; // 0xAC
		::System::Boolean _isDeactivated; // 0xAD
		::System::Boolean _isFinished; // 0xAE
		::UnityEngine::Vector2 _aimingTargetScreenOffset; // 0xB0
		::System::Single _maxPitch; // 0xB8
		::System::Single _deltaTime; // 0xBC
		::PipelineCamera::WorldBasicCameraData _lastCameraData; // 0xC0
		::System::Single _rotationDampingValue; // 0xEC
		::Foundation::Unreal::FName _debugName; // 0xF0
		::System::Single _minPitch; // 0xF8
		::System::Nullable_1<::UnityEngine::Vector3> _aimingTargetValue; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER__CTOR_OFFSET))(this);
		}

		static ::System::Single Damp(::System::Single initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_OFFSET))(initial, dampTime, deltaTime);
		}

		static ::UnityEngine::Vector3 Damp_1(::UnityEngine::Vector3 initial, ::UnityEngine::Vector3 dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_1_OFFSET))(initial, dampTime, deltaTime);
		}

		::PipelineCamera::WorldBasicCameraData DampingRotation(::PipelineCamera::WorldBasicCameraData& source, ::PipelineCamera::WorldBasicCameraData& target)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMPINGROTATION_OFFSET))(this, source, target);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetAimingTarget(::Foundation::Variable_1<::UnityEngine::Vector3> aimingTarget)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::Foundation::Variable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGET_OFFSET))(this, aimingTarget);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetAimingEnabled(::Foundation::Variable_1<::System::Boolean> enabled)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::Foundation::Variable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGENABLED_OFFSET))(this, enabled);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetAimingTargetScreenOffset(::UnityEngine::Vector3 screenOffset)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGETSCREENOFFSET_OFFSET))(this, screenOffset);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetDampingValue(::System::Single dampingValue)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETDAMPINGVALUE_OFFSET))(this, dampingValue);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetFixedAspectRatio(::System::Single fixedAspectRatio)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETFIXEDASPECTRATIO_OFFSET))(this, fixedAspectRatio);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetPostEvaluate(::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* onPostEval)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPOSTEVALUATE_OFFSET))(this, onPostEval);
		}

		::PipelineCamera::Blender::AimingCameraDataBlender* SetPitchConstraint(::System::Single min, ::System::Single max)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPITCHCONSTRAINT_OFFSET))(this, min, max);
		}

		::System::Boolean PipelineCamera_ICameraDataBlender_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean PipelineCamera_ICameraDataBlender_IsDeactivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISDEACTIVATED_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> PipelineCamera_ICameraDataBlender_GetReverseKey()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETREVERSEKEY_OFFSET))(this);
		}

		::PipelineCamera::ICameraDataBlender* PipelineCamera_ICameraDataBlender_Reversed(::Foundation::Unreal::FName newDebugName)
		{
			return ((::PipelineCamera::ICameraDataBlender*(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_REVERSED_OFFSET))(this, newDebugName);
		}

		::Foundation::Unreal::FName PipelineCamera_ICameraDataBlender_GetDebugName()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETDEBUGNAME_OFFSET))(this);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Activate(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::Module::InPlaceBlender* ownerBlender)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_ACTIVATE_OFFSET))(this, context, ownerBlender);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Deactivate(::PipelineCamera::ICameraCollectContext* context, ::PipelineCamera::Module::InPlaceBlender* ownerBlender)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*, ::PipelineCamera::Module::InPlaceBlender*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_DEACTIVATE_OFFSET))(this, context, ownerBlender);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Collect(::PipelineCamera::ICameraCollectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraCollectContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_COLLECT_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Flush(::PipelineCamera::ICameraFlushContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraFlushContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_FLUSH_OFFSET))(this, context);
		}

		::System::Void PipelineCamera_ICameraDataBlenderInternal_Touch(::PipelineCamera::ICameraTouchContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraTouchContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_TOUCH_OFFSET))(this, context);
		}

		::PipelineCamera::WorldBasicCameraData PipelineCamera_ICameraDataBlenderInternal_Evaluate(::PipelineCamera::WorldBasicCameraData& cameraData, ::PipelineCamera::ICameraEvaluateContext* context)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::PipelineCamera::ICameraEvaluateContext*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_EVALUATE_OFFSET))(this, cameraData, context);
		}

		static ::PipelineCamera::Blender::AimingCameraDataBlender* Easing(::Foundation::Unreal::FName debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam, ::PipelineCamera::ICameraTimestamp* cameraTimestamp)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::Foundation::Unreal::FName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>, ::PipelineCamera::ICameraTimestamp*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_EASING_OFFSET))(debugName, deltaFlag, duration, easingFunc, metaParam, cameraTimestamp);
		}

		static ::PipelineCamera::Blender::AimingCameraDataBlender* InterpCurve(::System::String* debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::PipelineCamera::InterpCurveMode curveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Nullable_1<::System::Single> tension, ::PipelineCamera::ICameraTimestamp* cameraTimestamp)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::System::String*, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::PipelineCamera::InterpCurveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Nullable_1<::System::Single>, ::PipelineCamera::ICameraTimestamp*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_INTERPCURVE_OFFSET))(debugName, deltaFlag, duration, curveMode, keys, tension, cameraTimestamp);
		}

		static ::PipelineCamera::Blender::AimingCameraDataBlender* AnimationCurve(::Foundation::Unreal::FName debugName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag deltaFlag, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::PipelineCamera::ICameraTimestamp* cameraTimestamp)
		{
			return ((::PipelineCamera::Blender::AimingCameraDataBlender*(*)(::Foundation::Unreal::FName, ::PipelineCamera::WorldBasicCameraDataDeltaFlag, ::System::Single, ::UnityEngine::AnimationCurve*, ::PipelineCamera::ICameraTimestamp*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ANIMATIONCURVE_OFFSET))(debugName, deltaFlag, duration, curve, cameraTimestamp);
		}
	};
}
