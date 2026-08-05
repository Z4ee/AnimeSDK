#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E64C24AE0799EB7C.h"
#include "unitysdk/MoleMole/SystemSettingEntryBase.h"

namespace System { class String; }

#define MOLEMOLE_JUMPSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET UNITYSDK_OFFSET(0x13A95050)
#define MOLEMOLE_JUMPSETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET UNITYSDK_OFFSET(0x13A95040)
#define MOLEMOLE_JUMPSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13A920D0)

namespace MoleMole
{
	inline static constexpr unsigned int JumpSettingEntry_TypeDefinitionIndex = 64626;

	class JumpSettingEntry : public ::MoleMole::SystemSettingEntryBase
	{
	public:
		::System::String* JumpTextCode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideVersionCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY_GET__ISHIDEVERSIONCODE_OFFSET))(this);
		}

		::Enum_3_E64C24AE0799EB7C get_SettingWidgetType()
		{
			return ((::Enum_3_E64C24AE0799EB7C(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_JUMPSETTINGENTRY_GET_SETTINGWIDGETTYPE_OFFSET))(this);
		}
	};
}
