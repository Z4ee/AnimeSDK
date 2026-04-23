#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundImage.h"
#include "unitysdk/RPGTools/Timeline/LayerBackgroundWhitelist.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class LayerBackgroundBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8E40A0)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8E4090)
#define RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E42A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundClip_TypeDefinitionIndex = 44888;

	class LayerBackgroundClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::Il2CppArray<::RPGTools::Timeline::LayerBackgroundImage>* Images; // 0x18
		::RPGTools::Timeline::LayerBackgroundWhitelist Whitelist; // 0x20
		::System::Single TODO_FadeTime; // 0x40
		::RPGTools::Timeline::LayerBackgroundBehaviour* Template; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LAYERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
