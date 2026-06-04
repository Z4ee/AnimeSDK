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

#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET UNITYSDK_OFFSET(0x1ACA6D60)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET UNITYSDK_OFFSET(0x1ACA6CA0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1ACA6AC0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_2_OFFSET UNITYSDK_OFFSET(0x1ACA6C10)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1ACA69D0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET UNITYSDK_OFFSET(0x1ACA6FD0)
#define SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET UNITYSDK_OFFSET(0x1ACA6E10)

namespace Spine::Unity::AnimationTools
{
	inline static constexpr unsigned int TimelineExtensions_TypeDefinitionIndex = 41493;

	class TimelineExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2 Evaluate(::Spine::TranslateTimeline* a1, ::System::Single a2, ::Spine::SkeletonData* a3)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TranslateTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 Evaluate_1(::Spine::TranslateXTimeline* a1, ::Spine::TranslateYTimeline* a2, ::System::Single a3, ::Spine::SkeletonData* a4)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TranslateXTimeline*, ::Spine::TranslateYTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Evaluate_2(::Spine::RotateTimeline* a1, ::System::Single a2, ::Spine::SkeletonData* a3)
		{
			return ((::System::Single(*)(::Spine::RotateTimeline*, ::System::Single, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATE_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 EvaluateTranslateXYMix(::Spine::TransformConstraintTimeline* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::TransformConstraintTimeline*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATETRANSLATEXYMIX_OFFSET))(a1, a2);
		}

		static ::System::Single EvaluateRotateMix(::Spine::TransformConstraintTimeline* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::Spine::TransformConstraintTimeline*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_EVALUATEROTATEMIX_OFFSET))(a1, a2);
		}

		static ::Spine::TranslateTimeline* FindTranslateTimelineForBone(::Spine::Animation* a1, ::System::Int32 a2)
		{
			return ((::Spine::TranslateTimeline*(*)(::Spine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSLATETIMELINEFORBONE_OFFSET))(a1, a2);
		}

		static ::Spine::TransformConstraintTimeline* FindTransformConstraintTimeline(::Spine::Animation* a1, ::System::Int32 a2)
		{
			return ((::Spine::TransformConstraintTimeline*(*)(::Spine::Animation*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_ANIMATIONTOOLS_TIMELINEEXTENSIONS_FINDTRANSFORMCONSTRAINTTIMELINE_OFFSET))(a1, a2);
		}
	};
}
