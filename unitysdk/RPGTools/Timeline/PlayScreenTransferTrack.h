#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATELAYERMIXER_OFFSET UNITYSDK_OFFSET(0xD036310)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD036410)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD036240)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD0366B0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD0363D0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD036AD0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD036C50)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD036BB0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD036C90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlayScreenTransferTrack_TypeDefinitionIndex = 45508;

	class PlayScreenTransferTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateLayerMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATELAYERMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean UnityEngine_Timeline_ILayerable_ShowDefaultLayeredTrackCommands()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_UNITYENGINE_TIMELINE_ILAYERABLE_SHOWDEFAULTLAYEREDTRACKCOMMANDS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
