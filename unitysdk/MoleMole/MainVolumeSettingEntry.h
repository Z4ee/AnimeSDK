#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/IntNumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;

#define MOLEMOLE_MAINVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x129ACB90)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x129ACB80)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x129ACCB0)
#define MOLEMOLE_MAINVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x129ACCD0)

namespace MoleMole
{
	inline static constexpr unsigned int MainVolumeSettingEntry_TypeDefinitionIndex = 81693;

	class MainVolumeSettingEntry : public ::MoleMole::IntNumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
