#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x12F94510)
#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x12F94500)
#define MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12F94520)

namespace MoleMole
{
	inline static constexpr unsigned int ListKeyBindingTitleSettingEntry_TypeDefinitionIndex = 50202;

	class ListKeyBindingTitleSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LISTKEYBINDINGTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
