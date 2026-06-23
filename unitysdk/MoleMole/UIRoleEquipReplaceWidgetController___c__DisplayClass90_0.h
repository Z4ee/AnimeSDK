#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleEquipReplaceWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C14520)
#define MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS90_0__ONRESETBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x15C14530)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleEquipReplaceWidgetController___c__DisplayClass90_0_TypeDefinitionIndex = 68210;

	class UIRoleEquipReplaceWidgetController___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* unDressList; // 0x10
		::MoleMole::UIRoleEquipReplaceWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResetBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEEQUIPREPLACEWIDGETCONTROLLER___C__DISPLAYCLASS90_0__ONRESETBTNCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
