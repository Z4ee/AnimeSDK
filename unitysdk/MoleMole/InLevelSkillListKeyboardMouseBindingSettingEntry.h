#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/KeyboardMouseKeyBindingSettingEntry.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"

#define MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x107F9580)
#define MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x107F9590)
#define MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x107F95A0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelSkillListKeyboardMouseBindingSettingEntry_TypeDefinitionIndex = 86130;

	class InLevelSkillListKeyboardMouseBindingSettingEntry : public ::MoleMole::KeyboardMouseKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::Enum_3_7FA27888FA17A22A get_SettingContentType()
		{
			return ((::Enum_3_7FA27888FA17A22A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MoleMole::LogicButtonInputType get_SettingLogicButtonInputType()
		{
			return ((::MoleMole::LogicButtonInputType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELSKILLLISTKEYBOARDMOUSEBINDINGSETTINGENTRY_GET_SETTINGLOGICBUTTONINPUTTYPE_OFFSET))(this);
		}
	};
}
