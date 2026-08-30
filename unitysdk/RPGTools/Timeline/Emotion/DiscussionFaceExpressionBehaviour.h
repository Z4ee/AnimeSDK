#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Emotion { class DiscussionFaceExpressionClip; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B57A120)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B57A140)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B57A130)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B57A430)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionFaceExpressionBehaviour_TypeDefinitionIndex = 49181;

	class DiscussionFaceExpressionBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
