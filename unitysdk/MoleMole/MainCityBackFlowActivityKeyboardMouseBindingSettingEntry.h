#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x17909DE0)
#define MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17909DF0)
#define MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17909E00)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityBackFlowActivityKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 68438;

	class MainCityBackFlowActivityKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYBACKFLOWACTIVITYKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
