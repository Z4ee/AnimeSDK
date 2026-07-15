#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B345990)
#define RPGTOOLS_TIMELINE_AUTOBLINKTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B345B00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AutoBlinkTrack_TypeDefinitionIndex = 46094;

	class AutoBlinkTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUTOBLINKTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUTOBLINKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
