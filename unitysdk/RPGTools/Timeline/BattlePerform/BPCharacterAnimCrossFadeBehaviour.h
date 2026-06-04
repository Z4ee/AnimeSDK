#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPG::Client { class MockAnimator; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterAnimCrossFadeClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFDDE50)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_METHOD_2_0DCA2BE47B561E94_OFFSET UNITYSDK_OFFSET(0xCFDE080)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFDDE70)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xCFDDE60)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCFDE110)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xCFDE120)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterAnimCrossFadeBehaviour_TypeDefinitionIndex = 46064;

	class BPCharacterAnimCrossFadeBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCharacterAnimCrossFadeClip* _Clip_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::BattlePerform::BPCharacterAnimCrossFadeClip* get_Clip()
		{
			return ((::RPGTools::Timeline::BattlePerform::BPCharacterAnimCrossFadeClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::BattlePerform::BPCharacterAnimCrossFadeClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterAnimCrossFadeClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_2_0DCA2BE47B561E94(::System::Int32 a1, ::RPG::Client::MockAnimator* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR_METHOD_2_0DCA2BE47B561E94_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADEBEHAVIOUR___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
