#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A1C3680)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A1C3670)
#define MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C37D0)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetAbilityScriptSupportPlayableAsset_TypeDefinitionIndex = 44350;

	class ZNetAbilityScriptSupportPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETABILITYSCRIPTSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
