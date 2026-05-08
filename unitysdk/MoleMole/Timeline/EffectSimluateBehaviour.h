#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_EFFECTSIMLUATEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17042570)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int EffectSimluateBehaviour_TypeDefinitionIndex = 77841;

	class EffectSimluateBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::System::Single rateOverTime; // 0x18
		::System::Single rateOverDistance; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_EFFECTSIMLUATEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
