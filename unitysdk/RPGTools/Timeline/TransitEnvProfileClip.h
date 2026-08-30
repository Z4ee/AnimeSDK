#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class TransitEnvProfileBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF2D540)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF2D6C0)
#define RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2D6D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TransitEnvProfileClip_TypeDefinitionIndex = 48868;

	class TransitEnvProfileClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::System::String* Path; // 0x28
		::System::Single Duration; // 0x30
		::RPGTools::Timeline::TransitEnvProfileBehaviour* template_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRANSITENVPROFILECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
