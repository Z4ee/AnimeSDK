#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline::BattlePerform { class BPCharacterHeadLookAtClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89A500)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_METHOD_2_927E8B22CB9C2007_OFFSET UNITYSDK_OFFSET(0xB89A7A0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89A520)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xB89A510)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB89A9B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB89A9C0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterHeadLookAtBehaviour_TypeDefinitionIndex = 45485;

	class BPCharacterHeadLookAtBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterHeadLookAtClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterHeadLookAtClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterHeadLookAtClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterHeadLookAtClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterHeadLookAtClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_SET_CLIP_OFFSET))(this, value);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_2_927E8B22CB9C2007()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR_METHOD_2_927E8B22CB9C2007_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
