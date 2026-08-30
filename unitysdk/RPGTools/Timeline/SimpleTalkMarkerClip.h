#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/RPGTools/Timeline/DontHidePanelType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class SimpleTalkMarkerBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0C4420)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0C4410)
#define RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C45A0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleTalkMarkerClip_TypeDefinitionIndex = 48692;

	class SimpleTalkMarkerClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean HideAll; // 0x18
		::RPGTools::Timeline::DontHidePanelType DontHidePanels; // 0x1C
		::System::Boolean BlackMask; // 0x20
		::RPG::GameCore::SimpleTalkBlackMaskColor BlackMaskColor; // 0x24
		::System::Boolean NeedFadeBlackMask; // 0x28
		::System::Single BlackMaskFadeDuration; // 0x2C
		::System::UInt32 ReferenceOptionTalkID; // 0x30
		::RPGTools::Timeline::SimpleTalkMarkerBehaviour* template_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLETALKMARKERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
