#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseSkillRowWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19108200)
#define MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARSKILLINFO_B__0_OFFSET UNITYSDK_OFFSET(0x19108210)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseSkillWidgetWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 70495;

	class UIInLevelPauseSkillWidgetWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseSkillRowWidgetController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAvatarSkillInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSESKILLWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS10_0__REFRESHAVATARSKILLINFO_B__0_OFFSET))(this);
		}
	};
}
