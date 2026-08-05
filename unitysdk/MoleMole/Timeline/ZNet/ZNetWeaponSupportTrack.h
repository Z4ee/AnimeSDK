#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x189221C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_METHOD_5_652F102150AC9967_OFFSET UNITYSDK_OFFSET(0x189222D0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18922270)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetWeaponSupportTrack_TypeDefinitionIndex = 91350;

	class ZNetWeaponSupportTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable Method_5_652F102150AC9967(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTTRACK_METHOD_5_652F102150AC9967_OFFSET))(this, a1, a2, a3);
		}
	};
}
