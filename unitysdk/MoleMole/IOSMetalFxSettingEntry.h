#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/MoleMole/EnumSettingEntry.h"

class Class_1_CDA44BE4158CAA8A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_IOSMETALFXSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x170D8160)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x170D8150)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_ISMETALFXENABLED_OFFSET UNITYSDK_OFFSET(0x170D8230)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x170D81E0)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x170D85B0)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x170D8650)
#define MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x170D8660)

namespace MoleMole
{
	inline static constexpr unsigned int IOSMetalFxSettingEntry_TypeDefinitionIndex = 78918;

	class IOSMetalFxSettingEntry : public ::MoleMole::EnumSettingEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* EnablePerformanceKeyList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean IsMetalFxEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY_ISMETALFXENABLED_OFFSET))(this);
		}

		::Class_1_CDA44BE4158CAA8A* __base_GetSettingControlUnit()
		{
			return ((::Class_1_CDA44BE4158CAA8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IOSMETALFXSETTINGENTRY___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
