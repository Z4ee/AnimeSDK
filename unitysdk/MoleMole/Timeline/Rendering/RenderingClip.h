#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline::Rendering { class RenderingBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1237CD30)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1237CF00)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingClip_TypeDefinitionIndex = 57978;

	class RenderingClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::Rendering::RenderingBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
