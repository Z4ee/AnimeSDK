#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class CamNoiseBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_CAMNOISECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1450A1E0)
#define MOLEMOLE_TIMELINE_CAMNOISECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1450A1D0)
#define MOLEMOLE_TIMELINE_CAMNOISECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1450A330)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CamNoiseClip_TypeDefinitionIndex = 74395;

	class CamNoiseClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::CamNoiseBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMNOISECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMNOISECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAMNOISECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
