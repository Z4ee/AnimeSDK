#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class MaterialGlitchBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA423F0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1BA423E0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_INITDATA_OFFSET UNITYSDK_OFFSET(0x1BA424D0)
#define MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA424F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialGlitchClip_TypeDefinitionIndex = 30661;

	class MaterialGlitchClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::MaterialGlitchBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void InitData(::UnityEngine::GameObject* bindObj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALGLITCHCLIP_INITDATA_OFFSET))(this, bindObj);
		}
	};
}
