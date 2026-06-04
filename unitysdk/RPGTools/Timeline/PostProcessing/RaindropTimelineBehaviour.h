#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/RaindropParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD045690)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int RaindropTimelineBehaviour_TypeDefinitionIndex = 45873;

	class RaindropTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::RaindropParameter RaindropParameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RAINDROPTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
