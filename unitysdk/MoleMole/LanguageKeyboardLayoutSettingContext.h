#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageKeyboardLayoutType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_LANGUAGEKEYBOARDLAYOUTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC54E0)

namespace MoleMole
{
	inline static constexpr unsigned int LanguageKeyboardLayoutSettingContext_TypeDefinitionIndex = 74015;

	class LanguageKeyboardLayoutSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::LanguageKeyboardLayoutType languageKeyboardLayoutType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LANGUAGEKEYBOARDLAYOUTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
