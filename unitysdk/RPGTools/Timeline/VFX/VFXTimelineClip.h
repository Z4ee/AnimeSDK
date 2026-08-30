#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/TimelineExposedReference.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF371E0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BF371B0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_EFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0x1BF37190)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1BF371C0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_SET_EFFECTPREFAB_OFFSET UNITYSDK_OFFSET(0x1BF371A0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_SET_PARENTTRACK_OFFSET UNITYSDK_OFFSET(0x1BF371D0)
#define RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF37280)

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int VFXTimelineClip_TypeDefinitionIndex = 49141;

	class VFXTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::GameObject* _effectPrefab_k__BackingField; // 0x18
		::System::String* effectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::System::Boolean DestroyOnClipEnd; // 0x30
		::System::Boolean UseEffectPluginFollow; // 0x31
		::UnityEngine::Vector3 offsetPosition; // 0x34
		::UnityEngine::Vector3 offsetRotation; // 0x40
		::System::Single offsetScale; // 0x4C
		::System::Boolean ignoreTargetRotation; // 0x50
		::System::Boolean ignoreTargetScale; // 0x51
		::System::Boolean onlyFirstFrame; // 0x52
		::System::Single effectScaleOffset; // 0x54
		::System::Boolean UseMonoEffectAttach; // 0x58
		::RPGTools::Timeline::TimelineExposedReference character; // 0x60
		::System::String* TargetEntity; // 0x80
		::System::String* CastEntity; // 0x88
		::System::Boolean useFixedRandomSeed; // 0x90
		::System::UInt32 randomSeed; // 0x94
		::System::Boolean SkipFadeIn; // 0x98
		::UnityEngine::Timeline::TrackAsset* _parentTrack_k__BackingField; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_effectPrefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_EFFECTPREFAB_OFFSET))(this);
		}

		::System::Void set_effectPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_SET_EFFECTPREFAB_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* get_parentTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_GET_PARENTTRACK_OFFSET))(this);
		}

		::System::Void set_parentTrack(::UnityEngine::Timeline::TrackAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_SET_PARENTTRACK_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFX_VFXTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
