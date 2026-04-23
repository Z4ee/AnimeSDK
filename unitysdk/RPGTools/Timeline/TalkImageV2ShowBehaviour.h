#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TalkImageV2ShowClip; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB922910)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB922930)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB922920)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB922AC0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB922AD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2ShowBehaviour_TypeDefinitionIndex = 45118;

	class TalkImageV2ShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TalkImageV2ShowClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkImageV2ShowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkImageV2ShowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkImageV2ShowClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2ShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
