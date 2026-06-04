#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFE7BC0)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFE7D40)
#define RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xCFE7E20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CRPCameraSplitScreenControlTrack_TypeDefinitionIndex = 45211;

	class CRPCameraSplitScreenControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CRPCAMERASPLITSCREENCONTROLTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
