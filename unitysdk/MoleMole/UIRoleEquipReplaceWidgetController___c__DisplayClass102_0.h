#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFAAB0)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS102_0__ONCUSTOMIZEDBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x14BFAAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass102_0_TypeDefinitionIndex = 48548;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleEquipReplaceWidgetController* __4__this; // 0x10
		::System::Int32 defaultUpSuitID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnCustomizedBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS102_0__ONCUSTOMIZEDBTNCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
