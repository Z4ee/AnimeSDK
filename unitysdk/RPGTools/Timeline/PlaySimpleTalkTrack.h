#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD038640)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD0389E0)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_METHOD_5_E193852057CEFCD8_OFFSET UNITYSDK_OFFSET(0xD039090)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD039500)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD039540)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD039620)
#define RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD039660)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlaySimpleTalkTrack_TypeDefinitionIndex = 45520;

	class PlaySimpleTalkTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoEnd; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* Method_5_E193852057CEFCD8()
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_METHOD_5_E193852057CEFCD8_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK_ONENABLE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSIMPLETALKTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
