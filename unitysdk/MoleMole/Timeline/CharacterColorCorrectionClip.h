#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class CharacterColorCorrectionBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class VisualEnvironmentE; }

#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x180A18F0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x180A18E0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x180A1C50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterColorCorrectionClip_TypeDefinitionIndex = 73358;

	class CharacterColorCorrectionClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CharacterColorCorrectionBehaviour* template_; // 0x18
		::UnityEngine::Rendering::Universal::VisualEnvironmentE* referenceObj; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
