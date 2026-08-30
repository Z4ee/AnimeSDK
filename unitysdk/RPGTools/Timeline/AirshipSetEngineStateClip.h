#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPGTools/Timeline/CustomEventClip.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

class CommonShipEngineController;
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE80D8C0)
#define RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE80DA60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AirshipSetEngineStateClip_TypeDefinitionIndex = 48296;

	class AirshipSetEngineStateClip : public ::RPGTools::Timeline::CustomEventClip
	{
	public:
		::CommonShipEngineController* airshipEngine; // 0x28
		::EAirshipWorkingState workingState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AIRSHIPSETENGINESTATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
