#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class TextShowBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_TEXTSHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x173A9A70)
#define MOLEMOLE_TIMELINE_TEXTSHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x173A9A60)
#define MOLEMOLE_TIMELINE_TEXTSHOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9C90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TextShowClip_TypeDefinitionIndex = 67304;

	class TextShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::TextShowBehaviour* template_; // 0x18
		::System::String* text; // 0x20
		::System::Int32 fontSize; // 0x28
		::UnityEngine::Color textColor; // 0x2C
		::UnityEngine::TextAnchor textAlignment; // 0x3C
		::System::Single fadeInTime; // 0x40
		::System::Single fadeOutTime; // 0x44
		::UnityEngine::Color backgroundColor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TEXTSHOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
