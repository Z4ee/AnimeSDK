#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_INTNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x149F0950)
#define MOLEMOLE_INTNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x149F0940)
#define MOLEMOLE_INTNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x149F0930)
#define MOLEMOLE_INTNUMSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x149F0900)

namespace MoleMole
{
	inline static constexpr unsigned int IntNumSettingEntry_TypeDefinitionIndex = 51109;

	class IntNumSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Int32 MinValue; // 0x30
		::System::Int32 DefaultValue; // 0x34
		::System::Int32 MaxValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GET__ISHIDEDEFAULTVALUE_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}

		::System::Int32 GetDefaultValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTNUMSETTINGENTRY_GETDEFAULTVALUE_OFFSET))(this);
		}
	};
}
