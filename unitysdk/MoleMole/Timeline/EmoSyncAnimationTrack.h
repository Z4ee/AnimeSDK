#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x10827E90)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x10827D30)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x108283C0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET UNITYSDK_OFFSET(0x10828380)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_B67A7D5A7BB42B14_OFFSET UNITYSDK_OFFSET(0x10828220)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x10828320)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EmoSyncAnimationTrack_TypeDefinitionIndex = 61566;

	class EmoSyncAnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::MoleMole::LanguageVoiceType curVoiceLanguage; // 0xB0
		::System::Boolean hasLoadAudio; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_B1CEB44F8026DA0D(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_B1CEB44F8026DA0D_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_B67A7D5A7BB42B14()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_B67A7D5A7BB42B14_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
