#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0C0F50)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B0C1000)
#define RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1150)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShiftCameraLookAtTrack_TypeDefinitionIndex = 48283;

	class ShiftCameraLookAtTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHIFTCAMERALOOKATTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
