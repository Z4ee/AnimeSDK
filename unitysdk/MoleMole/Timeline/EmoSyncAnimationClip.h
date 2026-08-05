#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class EmoSyncAnimationBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19726AD0)
#define MOLEMOLE_TIMELINE_EMOSYNCANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19726C20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EmoSyncAnimationClip_TypeDefinitionIndex = 49529;

	class EmoSyncAnimationClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::EmoSyncAnimationBehavior* emoSyncRecorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EMOSYNCANIMATIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
