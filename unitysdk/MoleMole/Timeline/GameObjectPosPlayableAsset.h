#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class GameObjectPosBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA838F0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BA838E0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_INITDATA_OFFSET UNITYSDK_OFFSET(0x1BA83AB0)
#define MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA83AD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GameObjectPosPlayableAsset_TypeDefinitionIndex = 30676;

	class GameObjectPosPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::GameObjectPosBehavior* PosBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void InitData(::UnityEngine::GameObject* referenceObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAMEOBJECTPOSPLAYABLEASSET_INITDATA_OFFSET))(this, referenceObj);
		}
	};
}
