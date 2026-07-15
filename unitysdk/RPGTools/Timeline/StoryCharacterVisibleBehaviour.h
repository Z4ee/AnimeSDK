#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class StoryCharacterVisibleClip; }

#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x199B8BD0)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x199B8BF0)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x199B8BE0)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x199B8E30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryCharacterVisibleBehaviour_TypeDefinitionIndex = 46539;

	class StoryCharacterVisibleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryCharacterVisibleClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryCharacterVisibleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryCharacterVisibleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryCharacterVisibleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryCharacterVisibleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
