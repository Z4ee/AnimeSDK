#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SmallTitleSettingEntry.h"

#define MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12C9C070)
#define MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12C9C1F0)
#define MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x12C9C210)

namespace MoleMole
{
	inline static constexpr unsigned int AccountPushSmallTitleSettingEntry_TypeDefinitionIndex = 64648;

	class AccountPushSmallTitleSettingEntry : public ::MoleMole::SmallTitleSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACCOUNTPUSHSMALLTITLESETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
