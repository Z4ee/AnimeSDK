#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace RPGTools::Timeline::VFX { class MiniEmotionClip_MiniEmotionOverride; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19F5A980)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19F5A970)
#define RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5AD40)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int MiniEmotionClip_TypeDefinitionIndex = 46866;

	class MiniEmotionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* EffectName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::System::Boolean DestroyOnClipEnd; // 0x30
		::System::String* CharacterUniqueName; // 0x38
		::RPGTools::Timeline::VFX::MiniEmotionClip_MiniEmotionOverride* OverrideData; // 0x40
		::RPG::GameCore::MiniEmoEffectOverride* ClientOverrideData; // 0x48
		::UnityEngine::Timeline::TrackAsset* Track; // 0x50
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_MINIEMOTIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
