#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B59BBA0)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B59BD20)
#define RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59BD90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamBulletCommentsTrack_TypeDefinitionIndex = 48633;

	class LiveStreamBulletCommentsTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMBULLETCOMMENTSTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
