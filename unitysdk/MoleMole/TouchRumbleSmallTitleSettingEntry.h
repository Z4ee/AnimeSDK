#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SmallTitleSettingEntry.h"

#define MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x1A5F5890)
#define MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F5930)
#define MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x1A5F5950)

namespace MoleMole
{
	inline static constexpr unsigned int TouchRumbleSmallTitleSettingEntry_TypeDefinitionIndex = 72403;

	class TouchRumbleSmallTitleSettingEntry : public ::MoleMole::SmallTitleSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOUCHRUMBLESMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
