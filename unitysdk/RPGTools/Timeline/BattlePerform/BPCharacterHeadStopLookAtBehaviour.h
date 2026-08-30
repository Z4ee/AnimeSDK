#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::BattlePerform { class BPCharacterHeadStopLookAtClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D12DF60)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1D12DF80)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0x1D12DF70)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12E0B0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterHeadStopLookAtBehaviour_TypeDefinitionIndex = 49267;

	class BPCharacterHeadStopLookAtBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterHeadStopLookAtClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterHeadStopLookAtClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterHeadStopLookAtClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterHeadStopLookAtClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterHeadStopLookAtClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADSTOPLOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
