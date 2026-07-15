#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::Audio { class WwiseExternalStopLoopSFXConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B345480)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B345470)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B345610)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseExternalStopLoopSFXClip_TypeDefinitionIndex = 47043;

	class WwiseExternalStopLoopSFXClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalStopLoopSFXConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALSTOPLOOPSFXCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
