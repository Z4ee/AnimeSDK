#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD0465B0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD046680)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xD046690)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ResetPostProcessTimelineBehaviour_TypeDefinitionIndex = 45877;

	class ResetPostProcessTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINEBEHAVIOUR___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
		}
	};
}
