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

#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1E5C57B0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMPINGROTATION_OFFSET UNITYSDK_OFFSET(0x1E5C3A20)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_1_OFFSET UNITYSDK_OFFSET(0x1E5C34A0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_DAMP_OFFSET UNITYSDK_OFFSET(0x1E5C33D0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_EASING_OFFSET UNITYSDK_OFFSET(0x1E5C5490)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_INTERPCURVE_OFFSET UNITYSDK_OFFSET(0x1E5C5610)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1E5C42F0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_COLLECT_OFFSET UNITYSDK_OFFSET(0x1E5C4530)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1E5C44D0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1E5C4A20)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E5C47B0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDERINTERNAL_TOUCH_OFFSET UNITYSDK_OFFSET(0x1E5C48C0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETDEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1E5C42A0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_GETREVERSEKEY_OFFSET UNITYSDK_OFFSET(0x1E5C4210)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1E5C41C0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1E5C4170)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_PIPELINECAMERA_ICAMERADATABLENDER_REVERSED_OFFSET UNITYSDK_OFFSET(0x1E5C4250)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGENABLED_OFFSET UNITYSDK_OFFSET(0x1E5C3F00)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGETSCREENOFFSET_OFFSET UNITYSDK_OFFSET(0x1E5C3F70)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETAIMINGTARGET_OFFSET UNITYSDK_OFFSET(0x1E5C3E90)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETDAMPINGVALUE_OFFSET UNITYSDK_OFFSET(0x1E5C3FD0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETFIXEDASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x1E5C4030)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPITCHCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1E5C40F0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER_SETPOSTEVALUATE_OFFSET UNITYSDK_OFFSET(0x1E5C40A0)
#define PIPELINECAMERA_BLENDER_AIMINGCAMERADATABLENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5460)

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int AimingCameraDataBlender_TypeDefinitionIndex = 38647;

	class AimingCameraDataBlender : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		// static const ::System::Single kLogNegligibleResidual; // 0x0
		::Foundation::Variable_1<::System::Boolean> _isAimingAllowed; // 0x10
		::PipelineCamera::TimeBasedAlphaGenerator* _alphaGenerator; // 0x28
		::PipelineCamera::ICameraTimestamp* _cameraTimestamp; // 0x30
		::Foundation::Variable_1<::UnityEngine::Vector3> _aimingTarget; // 0x38
		::System::Action_2<::System::Single, ::PipelineCamera::WorldBasicCameraData>* _postEvaluate; // 0x58
		::PipelineCamera::WorldBasicCameraDataDeltaFlag _deltaFlag; // 0x60
		::System::Single _deltaTime; // 0x64
		::System::Single _minPitch; // 0x68
		::System::Single _maxPitch; // 0x6C
		::System::Single _timestamp; // 0x70
		::System::Nullable_1<::System::Single> _fixedAspectRatio; // 0x74
		::UnityEngine::Vector2 _aimingTargetScreenOffset; // 0x7C
		::System::Single _rotationDampingValue; // 0x84
		::Foundation::Unreal::FName _debugName; // 0x88
		::PipelineCamera::WorldBasicCameraData _lastCameraData; // 0x90
		::System::Boolean _isAimingAllowedValue; // 0xBC
		::System::Boolean _isDeactivated; // 0xBD
		::System::Boolean _isFinished; // 0xBE
		::System::Nullable_1<::UnityEngine::Vector3> _aimingTargetValue; // 0xC0
		::System::Nullable_1<::PipelineCamera::WorldBasicCameraDeltaData> _deltaCameraData; // 0xD0

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
