#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/GamepadListKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_CANBEALLUNBIND_OFFSET UNITYSDK_OFFSET(0x173806C0)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x173806D0)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x173806E0)
#define MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x173806F0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelQTECancelGamepadBindingSettingEntry_TypeDefinitionIndex = 72740;

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

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELQTECANCELGAMEPADBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
