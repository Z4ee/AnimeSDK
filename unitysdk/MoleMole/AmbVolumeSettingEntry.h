#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/IntNumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;

#define MOLEMOLE_AMBVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x11445C10)
#define MOLEMOLE_AMBVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x11445C00)
#define MOLEMOLE_AMBVOLUMESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11445D30)
#define MOLEMOLE_AMBVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x11445D50)

namespace MoleMole
{
	inline static constexpr unsigned int AmbVolumeSettingEntry_TypeDefinitionIndex = 41535;

	class AmbVolumeSettingEntry : public ::MoleMole::IntNumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AMBVOLUMESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AMBVOLUMESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AMBVOLUMESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AMBVOLUMESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
