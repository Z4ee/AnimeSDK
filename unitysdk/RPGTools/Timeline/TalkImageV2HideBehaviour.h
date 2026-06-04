#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline { class TalkImageV2HideClip; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD061EC0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD061EE0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD061ED0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD062030)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD062040)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2HideBehaviour_TypeDefinitionIndex = 45663;

	class TalkImageV2HideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TalkImageV2HideClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkImageV2HideClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkImageV2HideClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkImageV2HideClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkImageV2HideClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2HIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
