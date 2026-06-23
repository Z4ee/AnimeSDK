#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/ListKeyBindingSettingEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x15134560)
#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15134530)
#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY___BASE_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x15134630)

namespace MoleMole
{
	inline static constexpr unsigned int KeyboardMouseKeyBindingSettingEntry_TypeDefinitionIndex = 76346;

	class KeyboardMouseKeyBindingSettingEntry : public ::MoleMole::ListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>* get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>* __base_get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY___BASE_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
