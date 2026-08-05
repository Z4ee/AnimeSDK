#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class MultiRendererBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1F3A0970)
#define MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1F3A0960)
#define MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_GET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x1F3A0920)
#define MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_SET_REFERENCES_OFFSET UNITYSDK_OFFSET(0x1F3A0940)
#define MOLEMOLE_TIMELINE_MULTIRENDERERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0A70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiRendererClip_TypeDefinitionIndex = 32844;

	class MultiRendererClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MultiRendererBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERCLIP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_references()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_GET_REFERENCES_OFFSET))(this);
		}

		::System::Void set_references(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_SET_REFERENCES_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIRENDERERCLIP_CREATEPLAYABLE_OFFSET))(this, graph, owner);
		}
	};
}
