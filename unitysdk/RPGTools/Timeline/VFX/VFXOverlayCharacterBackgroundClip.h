#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXOverlayCharacterBackgroundClip_BackgroundImageMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundBehaviour; }
namespace RPGTools::Timeline::VFX { class VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig; }
namespace RPGTools::Timeline::VFX { class VFXOverlayDissolveConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD06CEE0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD06CED0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_EFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0xD06CE80)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_HASBACKGROUNDSWITCHLIST_OFFSET UNITYSDK_OFFSET(0xD06CA60)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_ISMULTIPLEBACKGROUNDMODE_OFFSET UNITYSDK_OFFSET(0xD06CEC0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_ISSINGLEBACKGROUNDMODE_OFFSET UNITYSDK_OFFSET(0xD06CA50)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0xD06CEA0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_SET_EFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0xD06CE90)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_SET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0xD06CEB0)
#define RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD06D050)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXOverlayCharacterBackgroundClip_TypeDefinitionIndex = 45940;

	class VFXOverlayCharacterBackgroundClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		// static const ::System::String* BackgroundNodeName; // 0x0
		// static const ::System::String* OverlayCopyNodeName; // 0x0
		::UnityEngine::GameObject* _effectPrefab_k__BackingField; // 0x18
		::System::String* effectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::System::Boolean DestroyOnClipEnd; // 0x30
		::System::Boolean UseEffectPluginFollow; // 0x31
		::UnityEngine::Timeline::TrackAsset* _parentTrack_k__BackingField; // 0x38
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip_BackgroundImageMode ImageMode; // 0x40
		::UnityEngine::Color BackgroundColor; // 0x44
		::System::String* TexturePath; // 0x58
		::System::Collections::Generic::List_1<::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundClip_BackgroundSwitchConfig*>* BackgroundSwitchList; // 0x60
		::UnityEngine::Vector2 BackgroundAspect; // 0x68
		::System::Single FadeInDuration; // 0x70
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x78
		::System::Single FadeOutDuration; // 0x80
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x88
		::System::Boolean UseDissolve; // 0x90
		::RPGTools::Timeline::VFX::VFXOverlayDissolveConfig* DissolveConfig; // 0x98
		::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundBehaviour* template_; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_effectPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_EFFECTPREFAB_OFFSET))(this);
		}

		::System::Void set_effectPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_SET_EFFECTPREFAB_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TrackAsset* get_parentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_PARENTTRACK_OFFSET))(this);
		}

		::System::Void set_parentTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_SET_PARENTTRACK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSingleBackgroundMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_ISSINGLEBACKGROUNDMODE_OFFSET))(this);
		}

		::System::Boolean get_IsMultipleBackgroundMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_ISMULTIPLEBACKGROUNDMODE_OFFSET))(this);
		}

		::System::Boolean get_HasBackgroundSwitchList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_HASBACKGROUNDSWITCHLIST_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXOVERLAYCHARACTERBACKGROUNDCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
