#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x161F6350)
#define MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x161F6360)
#define MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x161F6370)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelNormalAttackGamepadBindingSettingEntry_TypeDefinitionIndex = 66981;

	class InLevelNormalAttackGamepadBindingSettingEntry : public ::MoleMole::GamepadListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELNORMALATTACKGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
