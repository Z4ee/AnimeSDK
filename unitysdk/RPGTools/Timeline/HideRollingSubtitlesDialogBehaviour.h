#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/BaseHideDialogBehaviour.h"

#define RPGTOOLS_TIMELINE_HIDEROLLINGSUBTITLESDIALOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E1100)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideRollingSubtitlesDialogBehaviour_TypeDefinitionIndex = 45020;

	class HideRollingSubtitlesDialogBehaviour : public ::RPGTools::Timeline::BaseHideDialogBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEROLLINGSUBTITLESDIALOGBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
