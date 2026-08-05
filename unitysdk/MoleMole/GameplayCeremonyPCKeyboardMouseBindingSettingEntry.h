#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19DC0150)
#define MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x19DC0160)
#define MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC0170)

namespace MoleMole
{
	inline static constexpr unsigned int GameplayCeremonyPCKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 86452;

	class GameplayCeremonyPCKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPLAYCEREMONYPCKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
