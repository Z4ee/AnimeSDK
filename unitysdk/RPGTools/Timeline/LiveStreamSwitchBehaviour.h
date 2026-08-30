#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class LiveStreamSwitchClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_GET_LIVESTREAMSWITCHCLIP_OFFSET UNITYSDK_OFFSET(0x1B59C3F0)
#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B59C410)
#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_SET_LIVESTREAMSWITCHCLIP_OFFSET UNITYSDK_OFFSET(0x1B59C400)
#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59C4B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamSwitchBehaviour_TypeDefinitionIndex = 48642;

	class LiveStreamSwitchBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LiveStreamSwitchClip* _LiveStreamSwitchClip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LiveStreamSwitchClip* get_LiveStreamSwitchClip()
		{
			return ((::RPGTools::Timeline::LiveStreamSwitchClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_GET_LIVESTREAMSWITCHCLIP_OFFSET))(this);
		}

		::System::Void set_LiveStreamSwitchClip(::RPGTools::Timeline::LiveStreamSwitchClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LiveStreamSwitchClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_SET_LIVESTREAMSWITCHCLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
