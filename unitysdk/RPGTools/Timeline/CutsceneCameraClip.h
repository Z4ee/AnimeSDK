#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5C9447FD38964139;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8BA350)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8BA330)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB8BA570)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_SET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8BA340)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8BA600)
#define RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP___IFIXBASEPROXY_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB8BA660)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CutsceneCameraClip_TypeDefinitionIndex = 44813;

	class CutsceneCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x18
		::UnityEngine::AnimationClip* clip; // 0x20
		::Class_2_5C9447FD38964139* template_; // 0x28
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

		::System::Void set_clipCaps(::UnityEngine::Timeline::ClipCaps value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::ClipCaps))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_SET_CLIPCAPS_OFFSET))(this, value);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Double __iFixBaseProxy_get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CUTSCENECAMERACLIP___IFIXBASEPROXY_GET_DURATION_OFFSET))(this);
		}
	};
}
