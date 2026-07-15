#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransformMixer.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1B35EFD0)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1B35EE70)
#define RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35F050)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveMixer_TypeDefinitionIndex = 46233;

	class CharacterStoryMoveMixer : public ::RPGTools::Timeline::OverrideTransformMixer
	{
	public:
		::System::String* CharacterUniqueName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER__CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTORYMOVEMIXER_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}
	};
}
