#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/MoleMole/UITextTypesettingSettings.h"

#define MOLEMOLE_UITEXTTYPESETTINGLANSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x130535D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextTypesettingLanSettings_TypeDefinitionIndex = 40801;

	class UITextTypesettingLanSettings : public ::MoleMole::UITextTypesettingSettings
	{
	public:
		::MoleMole::LanguageType language; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTTYPESETTINGLANSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
