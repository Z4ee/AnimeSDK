#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SmallTitleSettingEntry.h"

#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x134E7900)
#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x134E7A90)
#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x134E7AB0)

namespace MoleMole
{
	inline static constexpr unsigned int CloudTouchRumbleSmallTitleSettingEntry_TypeDefinitionIndex = 69833;

	class CloudTouchRumbleSmallTitleSettingEntry : public ::MoleMole::SmallTitleSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
