#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Spine { class Animation; }
namespace Spine { class RotateTimeline; }
namespace Spine { class SkeletonData; }
namespace Spine { class TransformConstraintTimeline; }
namespace Spine { class TranslateTimeline; }
namespace Spine { class TranslateXTimeline; }
namespace Spine { class TranslateYTimeline; }

#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET UNITYSDK_OFFSET(0x19E2C8D0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET UNITYSDK_OFFSET(0x19E2C800)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x19E2C5B0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0x19E2C750)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19E2C4B0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET UNITYSDK_OFFSET(0x19E2CB70)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET UNITYSDK_OFFSET(0x19E2C990)

namespace Spine::Unity::AnimationTools
{
	inline static constexpr unsigned int TimelineExtensions_TypeDefinitionIndex = 40666;

	class TimelineExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 Evaluate(::Spine::TranslateTimeline* timeline, ::System::Single time, ::Spine::SkeletonData* skeletonData)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TranslateTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET))(timeline, time, skeletonData);
		}

		static ::UnityEngine::Vector2 Evaluate_1(::Spine::TranslateXTimeline* xTimeline, ::Spine::TranslateYTimeline* yTimeline, ::System::Single time, ::Spine::SkeletonData* skeletonData)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_1_OFFSET))(xTimeline, yTimeline, time, skeletonData);
		}

		static ::System::Single Evaluate_2(::Spine::RotateTimeline* timeline, ::System::Single time, ::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Single(*)(::Spine::RotateTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_2_OFFSET))(timeline, time, skeletonData);
		}

		static ::UnityEngine::Vector2 EvaluateTranslateXYMix(::Spine::TransformConstraintTimeline* timeline, ::System::Single time)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TransformConstraintTimeline*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET))(timeline, time);
		}

		static ::System::Single EvaluateRotateMix(::Spine::TransformConstraintTimeline* timeline, ::System::Single time)
		{
			return ((::System::Single(*)(::Spine::TransformConstraintTimeline*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET))(timeline, time);
		}

		static ::Spine::TranslateTimeline* FindTranslateTimelineForBone(::Spine::Animation* a, ::System::Int32 boneIndex)
		{
			return ((::Spine::TranslateTimeline*(*)(::Spine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET))(a, boneIndex);
		}

		static ::Spine::TransformConstraintTimeline* FindTransformConstraintTimeline(::Spine::Animation* a, ::System::Int32 transformConstraintIndex)
		{
			return ((::Spine::TransformConstraintTimeline*(*)(::Spine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET))(a, transformConstraintIndex);
		}
	};
}
