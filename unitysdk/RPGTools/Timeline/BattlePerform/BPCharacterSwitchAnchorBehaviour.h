#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::BattlePerform { class BPCharacterSwitchAnchorClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89B4C0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89B4E0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89B4D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB89B870)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89B880)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterSwitchAnchorBehaviour_TypeDefinitionIndex = 45491;

	class BPCharacterSwitchAnchorBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterSwitchAnchorClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterSwitchAnchorClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterSwitchAnchorClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterSwitchAnchorClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterSwitchAnchorClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSWITCHANCHORBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
