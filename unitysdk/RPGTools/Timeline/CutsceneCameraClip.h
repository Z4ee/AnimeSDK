#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_C36E5CC18803AA1D;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A355B0)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A35590)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x19A35780)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A355A0)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A35810)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CutsceneCameraClip_TypeDefinitionIndex = 46284;

	class CutsceneCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::UnityEngine::AnimationClip* clip; // 0x20
		::Class_2_C36E5CC18803AA1D* template_; // 0x28
		::UnityEngine::Vector3 Position; // 0x30
		::System::Boolean UseUI3DCamera; // 0x3C
		::System::Single NearClipPlane; // 0x40
		::System::Single FarClipPlane; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_SET_CLIPCAPS_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_DURATION_OFFSET))(this);
		}
	};
}
