#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools { class StoryDurationTimeConfig_StoryDurationTime; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB7E9A0)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB7EB60)
#define RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB7EB70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PlayScreenTransferClip_TypeDefinitionIndex = 39054;

	class PlayScreenTransferClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::StoryDurationTimeConfig_StoryDurationTime* DurationData; // 0x18
		::RPG::GameCore::ScreenTransferType ScreenTransferType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PLAYSCREENTRANSFERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
