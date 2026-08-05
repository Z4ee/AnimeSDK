#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class UnitCompManagerBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18921B30)
#define MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18921B20)
#define MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x18921C80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int UnitCompMangerClip_TypeDefinitionIndex = 47153;

	class UnitCompMangerClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::UnitCompManagerBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_UNITCOMPMANGERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
