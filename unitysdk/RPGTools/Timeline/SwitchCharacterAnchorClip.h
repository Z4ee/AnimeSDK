#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class SwitchCharacterAnchorData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF275E0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF27740)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1BF27750)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0x1BF277C0)
#define RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF27830)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SwitchCharacterAnchorClip_TypeDefinitionIndex = 48824;

	class SwitchCharacterAnchorClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::SwitchCharacterAnchorData* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SWITCHCHARACTERANCHORCLIP_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}
	};
}
