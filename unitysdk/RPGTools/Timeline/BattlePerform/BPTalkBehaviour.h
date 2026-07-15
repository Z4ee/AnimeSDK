#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::BattlePerform { class BPTalkClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B349250)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B349270)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1B349260)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3493F0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkBehaviour_TypeDefinitionIndex = 47017;

	class BPTalkBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPTalkClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPTalkClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPTalkClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPTalkClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPTalkClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
