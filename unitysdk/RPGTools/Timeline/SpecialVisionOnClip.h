#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B0C4B70)
#define RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B0C4B60)
#define RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C4D00)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SpecialVisionOnClip_TypeDefinitionIndex = 48772;

	class SpecialVisionOnClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* VisionEffectType; // 0x18
		::System::String* CameraEffectType; // 0x20
		::System::Boolean SkipFade; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SPECIALVISIONONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
