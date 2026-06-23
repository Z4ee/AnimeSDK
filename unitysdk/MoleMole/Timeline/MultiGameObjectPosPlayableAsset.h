#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class MultiGameObjectPosBehavior; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_ADDREFERENCES_OFFSET UNITYSDK_OFFSET(0x1E7571A0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E756FC0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1E756FB0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_GET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x1E756F70)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_SET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x1E756F90)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E757680)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiGameObjectPosPlayableAsset_TypeDefinitionIndex = 32227;

	class MultiGameObjectPosPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MultiGameObjectPosBehavior* PosBehavior; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_references()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_GET_REFERENCES_OFFSET))(this);
		}

		::System::Void set_references(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_SET_REFERENCES_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Int32 AddReferences(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>* candidateReferences)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSPLAYABLEASSET_ADDREFERENCES_OFFSET))(this, candidateReferences);
		}
	};
}
