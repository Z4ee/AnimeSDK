#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController_TabItem; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199D4230)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_0__INITTAB_B__1_OFFSET UNITYSDK_OFFSET(0x199D4240)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 81342;

	class UIHandBookManualWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookManualWidgetController* __4__this; // 0x10
		::System::Int32 targetModuleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitTab_b__1(::MoleMole::UIHandBookManualWidgetController_TabItem* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIHandBookManualWidgetController_TabItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_0__INITTAB_B__1_OFFSET))(this, t);
		}
	};
}
