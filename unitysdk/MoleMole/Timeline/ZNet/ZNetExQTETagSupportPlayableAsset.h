#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline::ZNet { class ZNetExQTETagSupportBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x17E22F20)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x17E22F10)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17E23070)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportPlayableAsset_TypeDefinitionIndex = 60429;

	class ZNetExQTETagSupportPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::ZNet::ZNetExQTETagSupportBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
