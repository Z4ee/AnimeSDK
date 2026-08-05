#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x17380C40)
#define MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17380C50)
#define MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x17380C60)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityQuickFunc2GamepadBindingSettingEntry_TypeDefinitionIndex = 68217;

	class MainCityQuickFunc2GamepadBindingSettingEntry : public ::MoleMole::GamepadListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYQUICKFUNC2GAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
