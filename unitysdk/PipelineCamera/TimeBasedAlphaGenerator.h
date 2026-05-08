#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/EasingFunc.h"
#include "unitysdk/PipelineCamera/InterpCurveMode.h"
#include "unitysdk/PipelineCamera/TimeBasedAlphaGeneratorBuilder.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_ANIMATIONCURVEREVERSED_OFFSET UNITYSDK_OFFSET(0x1B508FF0)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_ANIMATIONCURVE_OFFSET UNITYSDK_OFFSET(0x1B508E60)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASINGINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B507B40)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASINGREVERSED_OFFSET UNITYSDK_OFFSET(0x1B5079A0)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASING_OFFSET UNITYSDK_OFFSET(0x1B507870)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B5086F0)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVEREVERSED_OFFSET UNITYSDK_OFFSET(0x1B508540)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVE_OFFSET UNITYSDK_OFFSET(0x1B508400)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5091F0)

namespace PipelineCamera
{
	inline static constexpr unsigned int TimeBasedAlphaGenerator_TypeDefinitionIndex = 36067;

	class TimeBasedAlphaGenerator : public ::System::Object
	{
	public:
		// static const ::System::Single DerivativeStep; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR__CTOR_OFFSET))(this);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* Easing(::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam, ::System::Single timeAlpha, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASING_OFFSET))(duration, easingFunc, metaParam, timeAlpha, startTimestamp);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* EasingReversed(::System::Single currentTimestamp, ::System::Single duration, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam, ::System::Single forwardTimeAlpha, ::System::Single forwardStartTimestamp, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::System::Single, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASINGREVERSED_OFFSET))(currentTimestamp, duration, easingFunc, metaParam, forwardTimeAlpha, forwardStartTimestamp, startTimestamp);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* EasingInternal(::PipelineCamera::TimeBasedAlphaGeneratorBuilder& builder, ::PipelineCamera::EasingFunc easingFunc, ::System::Nullable_1<::System::Single> metaParam)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::PipelineCamera::TimeBasedAlphaGeneratorBuilder&, ::PipelineCamera::EasingFunc, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_EASINGINTERNAL_OFFSET))(builder, easingFunc, metaParam);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* InterpCurve(::System::Single duration, ::PipelineCamera::InterpCurveMode curveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Nullable_1<::System::Single> tension, ::System::Single timeAlpha, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::PipelineCamera::InterpCurveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Nullable_1<::System::Single>, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVE_OFFSET))(duration, curveMode, keys, tension, timeAlpha, startTimestamp);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* InterpCurveReversed(::System::Single currentTimestamp, ::System::Single duration, ::PipelineCamera::InterpCurveMode curveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Nullable_1<::System::Single> tension, ::System::Single forwardTimeAlpha, ::System::Single forwardStartTimestamp, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::System::Single, ::PipelineCamera::InterpCurveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Nullable_1<::System::Single>, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVEREVERSED_OFFSET))(currentTimestamp, duration, curveMode, keys, tension, forwardTimeAlpha, forwardStartTimestamp, startTimestamp);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* InterpCurveInternal(::PipelineCamera::TimeBasedAlphaGeneratorBuilder& builder, ::PipelineCamera::InterpCurveMode curveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* keys, ::System::Nullable_1<::System::Single> tension)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::PipelineCamera::TimeBasedAlphaGeneratorBuilder&, ::PipelineCamera::InterpCurveMode, ::System::Collections::Generic::IList_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_INTERPCURVEINTERNAL_OFFSET))(builder, curveMode, keys, tension);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* AnimationCurve(::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Single timeAlpha, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_ANIMATIONCURVE_OFFSET))(duration, curve, timeAlpha, startTimestamp);
		}

		static ::PipelineCamera::TimeBasedAlphaGenerator* AnimationCurveReversed(::System::Single currentTimestamp, ::System::Single duration, ::UnityEngine::AnimationCurve* curve, ::System::Single forwardTimeAlpha, ::System::Single forwardStartTimestamp, ::System::Single startTimestamp)
		{
			return ((::PipelineCamera::TimeBasedAlphaGenerator*(*)(::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATOR_ANIMATIONCURVEREVERSED_OFFSET))(currentTimestamp, duration, curve, forwardTimeAlpha, forwardStartTimestamp, startTimestamp);
		}
	};
}
