#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/PCAdvancedGraphicsEnumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;

#define MOLEMOLE_PCRTXENABLESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x129D7370)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x129D7360)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x129D73F0)
#define MOLEMOLE_PCRTXENABLESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x129D7400)

namespace MoleMole
{
	inline static constexpr unsigned int PCRTXEnableSettingEntry_TypeDefinitionIndex = 89594;

	class PCRTXEnableSettingEntry : public ::MoleMole::PCAdvancedGraphicsEnumSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCRTXENABLESETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
