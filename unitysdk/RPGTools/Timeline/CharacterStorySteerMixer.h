#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransformMixer.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8B5390)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B5220)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xB8B5410)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xB8B5430)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xB8B5420)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStorySteerMixer_TypeDefinitionIndex = 44777;

	class CharacterStorySteerMixer : public ::RPGTools::Timeline::OverrideTransformMixer
	{
	public:
		::System::String* CharacterUniqueName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable P0, ::UnityEngine::Playables::FrameData P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, P0, P1);
		}
	};
}
