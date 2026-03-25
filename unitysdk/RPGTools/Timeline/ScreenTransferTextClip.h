#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB9BF10)
#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB9C0F0)
#define RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB9C100)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ScreenTransferTextClip_TypeDefinitionIndex = 39058;

	class ScreenTransferTextClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double OutStart; // 0x18
		::System::UInt32 SentenceID; // 0x20
		::System::Boolean CanPauseTimeline; // 0x24
		::System::Boolean NotAuto; // 0x25
		::System::Boolean PlayVoice; // 0x26

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCREENTRANSFERTEXTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
