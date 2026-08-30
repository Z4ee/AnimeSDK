#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace RPGTools::Timeline::Audio { class WwiseMutePropAudioClip; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xE815E30)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE815E50)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xE815E40)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE816150)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseMutePropAudioBehaviour_TypeDefinitionIndex = 49303;

	class WwiseMutePropAudioBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Audio::WwiseMutePropAudioClip* _Owner_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Audio::WwiseMutePropAudioClip* get_Owner()
		{
			return ((::RPGTools::Timeline::Audio::WwiseMutePropAudioClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPGTools::Timeline::Audio::WwiseMutePropAudioClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Audio::WwiseMutePropAudioClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEPROPAUDIOBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}
	};
}
