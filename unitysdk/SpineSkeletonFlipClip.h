#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class SpineSkeletonFlipBehaviour;
namespace UnityEngine { class GameObject; }

#define SPINESKELETONFLIPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19E2AA90)
#define SPINESKELETONFLIPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19E2AA80)
#define SPINESKELETONFLIPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19E2AB60)

inline static constexpr unsigned int SpineSkeletonFlipClip_TypeDefinitionIndex = 40895;

class SpineSkeletonFlipClip : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::SpineSkeletonFlipBehaviour* template_; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP__CTOR_OFFSET))(this);
	}

	::UnityEngine::Timeline::ClipCaps get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SPINESKELETONFLIPCLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
	}
};
