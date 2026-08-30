#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D128D90)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D128D50)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D128F20)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwisePostEventAudioClip_TypeDefinitionIndex = 49305;

	class WwisePostEventAudioClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* EventName; // 0x18
		::System::Boolean IsLoop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEPOSTEVENTAUDIOCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
