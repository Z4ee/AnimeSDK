#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABB9E30)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABB9F70)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xABBA0D0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABBA1C0)
#define RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xABBA200)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VirtualCameraSampleAnimationTrack_TypeDefinitionIndex = 38705;

	class VirtualCameraSampleAnimationTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::UnityEngine::Vector3 Position; // 0xC8
		::System::Single NearClipPlane; // 0xD4
		::System::Single FarClipPlane; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VIRTUALCAMERASAMPLEANIMATIONTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}
