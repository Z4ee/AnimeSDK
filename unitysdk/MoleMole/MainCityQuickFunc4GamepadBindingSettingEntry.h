#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x136C4090)
#define MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x136C40A0)
#define MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x136C40B0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityQuickFunc4GamepadBindingSettingEntry_TypeDefinitionIndex = 83138;

	class MainCityQuickFunc4GamepadBindingSettingEntry : public ::MoleMole::GamepadListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC4GAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
