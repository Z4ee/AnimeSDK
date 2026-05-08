#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFlowerMainListWidgetController_Data; }
namespace MoleMole { class UIFlowerMain_RightWidgetController; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15190A80)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SORTFLOWERDATA_G__SORTEDFUNC_0_OFFSET UNITYSDK_OFFSET(0x15190A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass27_0_TypeDefinitionIndex = 77220;

	class UIFlowerMain_RightWidgetController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFlowerMain_RightWidgetController* __4__this; // 0x10
		::System::Boolean funSelected; // 0x18
		::System::Boolean gentleSelected; // 0x19
		::System::Boolean richSelected; // 0x1A
		::System::Boolean romanceSelected; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SortFlowerData_g__SortedFunc_0(::MoleMole::UIFlowerMainListWidgetController_Data* a, ::MoleMole::UIFlowerMainListWidgetController_Data* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIFlowerMainListWidgetController_Data*, ::MoleMole::UIFlowerMainListWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS27_0__SORTFLOWERDATA_G__SORTEDFUNC_0_OFFSET))(this, a, b);
		}
	};
}
