#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CameraShakeConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8A56A0)
#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8A5BD0)
#define RPGTOOLS_TIMELINE_CAMERASHAKECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8A5BE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeClip_TypeDefinitionIndex = 44579;

	class CameraShakeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Boolean DestroyOnClipEnd; // 0x20
		::RPGTools::Timeline::CameraShakeConfig* CameraShakeConfig; // 0x28
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
