#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_CANMOVEBYUSERINTIMELINE_OFFSET UNITYSDK_OFFSET(0x123810C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x12381010)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x12381170)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_METHOD_5_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12381160)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12381100)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAbilityScriptSupportTrack_TypeDefinitionIndex = 61461;

	class ZNetAbilityScriptSupportTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CanMoveByUserInTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_CANMOVEBYUSERINTIMELINE_OFFSET))(this);
		}

		::System::Boolean Method_5_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_METHOD_5_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
