#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVHSStorePicBtnWidgetController; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }

#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1916F450)
#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_1__INITSLOT_B__5_OFFSET UNITYSDK_OFFSET(0x1916F460)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreWidgetWidgetController___c__DisplayClass35_1_TypeDefinitionIndex = 42752;

	class UIVHSStoreWidgetWidgetController___c__DisplayClass35_1 : public ::System::Object
	{
	public:
		::MoleMole::UIVHSStoreWidgetWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_1__CTOR_OFFSET))(this);
		}

		::System::Void _InitSlot_b__5(::MoleMole::UIVHSStorePicBtnWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStorePicBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_1__INITSLOT_B__5_OFFSET))(this, controller);
		}
	};
}
