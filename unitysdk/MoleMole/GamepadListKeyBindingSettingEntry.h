#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/ListKeyBindingSettingEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x16CAE970)
#define MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAEA00)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadListKeyBindingSettingEntry_TypeDefinitionIndex = 70923;

	class GamepadListKeyBindingSettingEntry : public ::MoleMole::ListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>* get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_A019F766F8C74696>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
