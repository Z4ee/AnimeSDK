#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::GameCore { class PerformanceBgEffectFrameConfig; }
namespace RPGTools::Timeline { class TalkBgEffectFrameShowClip; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xD060710)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_METHOD_2_52AAE9CCF700C74B_OFFSET UNITYSDK_OFFSET(0xD060810)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD060730)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xD060720)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD060A10)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xD060A20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBgEffectFrameShowBehaviour_TypeDefinitionIndex = 45652;

	class TalkBgEffectFrameShowBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::TalkBgEffectFrameShowClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::TalkBgEffectFrameShowClip* get_Clip()
		{
			return ((::RPGTools::Timeline::TalkBgEffectFrameShowClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::TalkBgEffectFrameShowClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::TalkBgEffectFrameShowClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PerformanceBgEffectFrameConfig* Method_2_52AAE9CCF700C74B(::System::String* a1)
		{
			return ((::RPG::GameCore::PerformanceBgEffectFrameConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR_METHOD_2_52AAE9CCF700C74B_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
