#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define GAUSSIANBLURVOLUMETIMELINEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1283DB30)
#define GAUSSIANBLURVOLUMETIMELINEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1283DB20)
#define GAUSSIANBLURVOLUMETIMELINEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1283DD30)

inline static constexpr unsigned int GaussianBlurVolumeTimelineAsset_TypeDefinitionIndex = 70134;

class GaussianBlurVolumeTimelineAsset : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::System::Boolean isActive; // 0x18
	::System::Single maskTiling; // 0x1C
	::System::Single maskRotation; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEASSET__CTOR_OFFSET))(this);
	}

	::UnityEngine::Timeline::ClipCaps get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEASSET_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
	}
};
