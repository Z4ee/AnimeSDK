#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B34A9F0)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B34AB70)
#define RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B34ABE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BlockSetVisibilityTrack_TypeDefinitionIndex = 46102;

	class BlockSetVisibilityTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BLOCKSETVISIBILITYTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
