#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSkillLevelUpPopWindowController; }

#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1486ECF0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1486ED00)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1486ED70)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x1486EE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 78549;

	class UIRoleSkillLevelUpPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSkillLevelUpPopWindowController* __4__this; // 0x10
		::Struct_2_72D718364F0A8071 skill; // 0x18
		::System::Boolean closeAfterUpgradeDone; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__2_OFFSET))(this);
		}
	};
}
