#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_72D718364F0A8071.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSkillLevelUpPopWindowController; }

#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45ED0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17D45EE0)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17D45F50)
#define MOLEMOLE_UIROLESKILLLEVELUPPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__REFRESHVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x17D46060)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 68718;

	class UIRoleSkillLevelUpPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::Struct_2_72D718364F0A8071 skill; // 0x10
		::MoleMole::UIRoleSkillLevelUpPopWindowController* __4__this; // 0x20
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
