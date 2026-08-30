#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransformMixer.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE834640)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8344E0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYSTEERMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8346C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStorySteerMixer_TypeDefinitionIndex = 48482;

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
	};
}
