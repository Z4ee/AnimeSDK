#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseHideDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDEB51RACINGPERFORMANCEDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xE861A80)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideB51RacingPerformanceDialogBehaviour_TypeDefinitionIndex = 48742;

	class HideB51RacingPerformanceDialogBehaviour : public ::RPGTools::Timeline::BaseHideDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEB51RACINGPERFORMANCEDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
