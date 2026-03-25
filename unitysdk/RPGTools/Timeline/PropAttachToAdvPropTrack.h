#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB949D0)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB94B10)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB94B80)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB94B90)
#define RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB94BD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PropAttachToAdvPropTrack_TypeDefinitionIndex = 39079;

	class PropAttachToAdvPropTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PROPATTACHTOADVPROPTRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
