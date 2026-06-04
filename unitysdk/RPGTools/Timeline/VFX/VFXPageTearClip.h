#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::VFX { class PageTearConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD06DBB0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD06DBA0)
#define RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD06DD10)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXPageTearClip_TypeDefinitionIndex = 45947;

	class VFXPageTearClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::VFX::PageTearConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXPAGETEARCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
