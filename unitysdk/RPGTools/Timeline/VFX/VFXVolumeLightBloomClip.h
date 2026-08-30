#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::VFX { class VFXVolumeLightBloomBehaviour; }
namespace RPGTools::Timeline::VFX { class VolumeLightBloomConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE902D00)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE902CF0)
#define RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE902E90)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXVolumeLightBloomClip_TypeDefinitionIndex = 49147;

	class VFXVolumeLightBloomClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::VFX::VolumeLightBloomConfig* Config; // 0x18
		::RPGTools::Timeline::VFX::VFXVolumeLightBloomBehaviour* Template; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXVOLUMELIGHTBLOOMCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
