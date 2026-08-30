#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class StoryPropScaleClip; }

#define RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF26220)
#define RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1BF26240)
#define RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1BF26230)
#define RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF263A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropScaleBehaviour_TypeDefinitionIndex = 48820;

	class StoryPropScaleBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::StoryPropScaleClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::StoryPropScaleClip* get_Clip()
		{
			return ((::RPGTools::Timeline::StoryPropScaleClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::StoryPropScaleClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::StoryPropScaleClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPSCALEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
