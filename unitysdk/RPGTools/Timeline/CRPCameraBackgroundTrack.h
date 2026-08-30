#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE81F550)
#define RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE81F6D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraBackgroundTrack_TypeDefinitionIndex = 48340;

	class CRPCameraBackgroundTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERABACKGROUNDTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
