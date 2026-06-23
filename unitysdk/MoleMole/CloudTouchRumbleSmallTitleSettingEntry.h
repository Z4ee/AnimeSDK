#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SmallTitleSettingEntry.h"

#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12700D90)
#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12700F20)
#define MOLEMOLE_CLOUDTOUCHRUMBLESMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12700F40)

namespace MoleMole
{
	inline static constexpr unsigned int CloudTouchRumbleSmallTitleSettingEntry_TypeDefinitionIndex = 53974;

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
