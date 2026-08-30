#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Emotion { class DiscussionEyeBloomClip; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE84A030)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE84A050)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE84A040)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE84A2B0)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionEyeBloomBehaviour_TypeDefinitionIndex = 49173;

	class DiscussionEyeBloomBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Emotion::DiscussionEyeBloomClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Emotion::DiscussionEyeBloomClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Emotion::DiscussionEyeBloomClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Emotion::DiscussionEyeBloomClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Emotion::DiscussionEyeBloomClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYEBLOOMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
