#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class StoryPropEffectTransformClip; }

#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93A020)
#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE93A040)
#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE93A030)
#define RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE93A170)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropEffectTransformBehaviour_TypeDefinitionIndex = 48350;

	class StoryPropEffectTransformBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropEffectTransformClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropEffectTransformClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropEffectTransformClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropEffectTransformClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropEffectTransformClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPEFFECTTRANSFORMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
