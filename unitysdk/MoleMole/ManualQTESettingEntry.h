#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/EnumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;

#define MOLEMOLE_MANUALQTESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x17380D50)
#define MOLEMOLE_MANUALQTESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x17380D40)
#define MOLEMOLE_MANUALQTESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17380DD0)
#define MOLEMOLE_MANUALQTESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x17380E70)

namespace MoleMole
{
	inline static constexpr unsigned int ManualQTESettingEntry_TypeDefinitionIndex = 80648;

	class ManualQTESettingEntry : public ::MoleMole::EnumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MANUALQTESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MANUALQTESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MANUALQTESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MANUALQTESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
