#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB28480)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB28510)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xAB28520)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkHideBehaviour_TypeDefinitionIndex = 39588;

	class BPTalkHideBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}
	};
}
