#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseShowDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_SHOWB51RACINGPERFORMANCEDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C1230)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowB51RacingPerformanceDialogBehaviour_TypeDefinitionIndex = 48748;

	class ShowB51RacingPerformanceDialogBehaviour : public ::RPGTools::Timeline::BaseShowDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWB51RACINGPERFORMANCEDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
