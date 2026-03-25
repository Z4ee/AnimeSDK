#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB79190)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB79370)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB793E0)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB794C0)
#define RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB79560)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ModifyAudienceGroupAnimTypeTrack_TypeDefinitionIndex = 39035;

	class ModifyAudienceGroupAnimTypeTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MODIFYAUDIENCEGROUPANIMTYPETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
