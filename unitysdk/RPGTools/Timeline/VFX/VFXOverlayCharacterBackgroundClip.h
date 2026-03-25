#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXTimelineClip.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline::VFX { class VFXOverlayDissolveConfig; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABB5360)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABB5350)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABB5550)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABB5600)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundClip_TypeDefinitionIndex = 39469;

	class VFXOverlayCharacterBackgroundClip : public ::RPGTools::Timeline::VFX::VFXTimelineClip
	{
	public:
		::UnityEngine::Color BackgroundColor; // 0xA0
		::System::String* TexturePath; // 0xB0
		::UnityEngine::Vector2 BackgroundAspect; // 0xB8
		::System::Single FadeInDuration; // 0xC0
		::UnityEngine::AnimationCurve* FadeInCurve; // 0xC8
		::System::Single FadeOutDuration; // 0xD0
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0xD8
		::System::Boolean UseDissolve; // 0xE0
		::RPGTools::Timeline::VFX::VFXOverlayDissolveConfig* DissolveConfig; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1);
		}
	};
}
