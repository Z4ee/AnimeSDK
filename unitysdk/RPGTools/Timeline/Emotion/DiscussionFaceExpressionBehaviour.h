#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Emotion { class DiscussionFaceExpressionClip; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8CCA90)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8CCAB0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8CCAA0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8CCDA0)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8CCDB0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionFaceExpressionBehaviour_TypeDefinitionIndex = 45413;

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

		::System::Void set_Clip(::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::DiscussionFaceExpressionClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONFACEEXPRESSIONBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
