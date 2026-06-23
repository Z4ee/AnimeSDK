#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_54486B88E1863A04.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET UNITYSDK_OFFSET(0x13026C70)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x13026C80)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x13026C90)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13026CA0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelQTECancelGamepadBindingSettingEntry_TypeDefinitionIndex = 65705;

	class InLevelQTECancelGamepadBindingSettingEntry : public ::MoleMole::GamepadListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanBeAllUnbind()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET))(this);
		}

		::Enum_3_54486B88E1863A04 get_SettingContentType()
		{
			return ((::Enum_3_54486B88E1863A04(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
