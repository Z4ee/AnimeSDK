#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelSkillButtonGeneralEffWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8F770)
#define MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PLAYFEEDBACK_B__0_OFFSET UNITYSDK_OFFSET(0x19C8F780)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonGeneralEffWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 84206;

	class UIInLevelSkillButtonGeneralEffWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelSkillButtonGeneralEffWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFeedBack_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONGENERALEFFWIDGETCONTROLLER___C__DISPLAYCLASS8_0__PLAYFEEDBACK_B__0_OFFSET))(this);
		}
	};
}
