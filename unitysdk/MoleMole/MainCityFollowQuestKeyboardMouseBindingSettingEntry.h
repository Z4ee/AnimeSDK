#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1685C0C0)
#define MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1685C0D0)
#define MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1685C0E0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityFollowQuestKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 84039;

	class MainCityFollowQuestKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYFOLLOWQUESTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
