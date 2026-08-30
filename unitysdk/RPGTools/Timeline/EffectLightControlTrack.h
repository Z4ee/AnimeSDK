#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE83F130)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE83F790)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectLightControlTrack_TypeDefinitionIndex = 48619;

	class EffectLightControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoReset; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
