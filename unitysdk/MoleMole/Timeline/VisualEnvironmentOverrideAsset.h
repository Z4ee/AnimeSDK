#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class VisualEnvironmentOverrideBehavior; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18DED840)
#define MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DED990)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvironmentOverrideAsset_TypeDefinitionIndex = 91010;

	class VisualEnvironmentOverrideAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::VisualEnvironmentOverrideBehavior* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVIRONMENTOVERRIDEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
