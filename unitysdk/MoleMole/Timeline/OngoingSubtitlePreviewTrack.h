#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x179615A0)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x17961760)
#define MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x17961700)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OngoingSubtitlePreviewTrack_TypeDefinitionIndex = 46657;

	class OngoingSubtitlePreviewTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Int32 languageType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ONGOINGSUBTITLEPREVIEWTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}
	};
}
