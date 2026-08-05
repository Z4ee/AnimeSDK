#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_SHOTACTIVETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1999B040)
#define MOLEMOLE_TIMELINE_SHOTACTIVETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x1999B430)
#define MOLEMOLE_TIMELINE_SHOTACTIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1999B3D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShotActiveTrack_TypeDefinitionIndex = 51341;

	class ShotActiveTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean clipMode; // 0xB0
		::System::Boolean justShow; // 0xB1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHOTACTIVETRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
