#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

#define MOLEMOLE_SMALLTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x1606D070)
#define MOLEMOLE_SMALLTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x1606D060)
#define MOLEMOLE_SMALLTITLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1606D080)

namespace MoleMole
{
	inline static constexpr unsigned int SmallTitleSettingEntry_TypeDefinitionIndex = 43251;

	class SmallTitleSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SMALLTITLESETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
