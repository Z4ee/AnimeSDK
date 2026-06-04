#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseShowDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xD054DE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowRollingSubtitlesDialogBehaviour_TypeDefinitionIndex = 45583;

	class ShowRollingSubtitlesDialogBehaviour : public ::RPGTools::Timeline::BaseShowDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
