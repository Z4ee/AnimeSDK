#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class LiveStreamAudienceControlClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E8E30)
#define RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E8E50)
#define RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB8E8E40)
#define RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E8EF0)
#define RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8E8F00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamAudienceControlBehaviour_TypeDefinitionIndex = 44909;

	class LiveStreamAudienceControlBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LiveStreamAudienceControlClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::LiveStreamAudienceControlClip* get_Clip()
		{
			return ((::RPGTools::Timeline::LiveStreamAudienceControlClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::LiveStreamAudienceControlClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::LiveStreamAudienceControlClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMAUDIENCECONTROLBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
