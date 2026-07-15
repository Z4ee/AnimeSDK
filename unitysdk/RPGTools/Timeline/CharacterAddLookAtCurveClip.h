#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterAddLookAtCurveData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B354110)
#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B354280)
#define RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B354290)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterAddLookAtCurveClip_TypeDefinitionIndex = 46196;

	class CharacterAddLookAtCurveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::RPGTools::Timeline::CharacterAddLookAtCurveData* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERADDLOOKATCURVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
