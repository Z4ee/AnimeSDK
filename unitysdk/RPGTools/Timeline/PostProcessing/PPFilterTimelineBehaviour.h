#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/PPFilterParameter.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8D7C0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PPFilterTimelineBehaviour_TypeDefinitionIndex = 39392;

	class PPFilterTimelineBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::PostProcessing::PPFilterParameter PPFilterParameter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_PPFILTERTIMELINEBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
