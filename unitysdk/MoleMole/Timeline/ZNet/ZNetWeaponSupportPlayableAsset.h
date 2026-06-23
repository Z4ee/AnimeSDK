#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline::ZNet { class ZNetWeaponSupportBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1819CA00)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1819C9F0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1819CB50)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetWeaponSupportPlayableAsset_TypeDefinitionIndex = 49387;

	class ZNetWeaponSupportPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::ZNet::ZNetWeaponSupportBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETWEAPONSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
