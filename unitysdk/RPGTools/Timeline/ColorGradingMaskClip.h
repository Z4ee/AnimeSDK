#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/ColorGradingMaskWhitelist.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFFA860)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFFA850)
#define RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFFA9C0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ColorGradingMaskClip_TypeDefinitionIndex = 45737;

	class ColorGradingMaskClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean AutoReset; // 0x18
		::RPGTools::Timeline::ColorGradingMaskWhitelist Whitelist; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_COLORGRADINGMASKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
