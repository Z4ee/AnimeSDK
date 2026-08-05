#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class SkinnedMeshRendererBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A0BA0)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1F3A0B90)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_INITCLIP_OFFSET UNITYSDK_OFFSET(0x1F3A0C70)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0C90)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SkinnedMeshRendererPlayableAsset_TypeDefinitionIndex = 32849;

	class SkinnedMeshRendererPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::SkinnedMeshRendererBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void InitClip(::UnityEngine::GameObject* refGameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERPLAYABLEASSET_INITCLIP_OFFSET))(this, refGameObject);
		}
	};
}
