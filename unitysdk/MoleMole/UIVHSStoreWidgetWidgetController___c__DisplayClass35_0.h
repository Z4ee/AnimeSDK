#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVHSStorePicBtnWidgetController; }
namespace MoleMole { class UIVHSStoreWidgetWidgetController; }

#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10899020)
#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__INITSLOT_B__2_OFFSET UNITYSDK_OFFSET(0x10899030)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreWidgetWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 86389;

	class UIVHSStoreWidgetWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UIVHSStoreWidgetWidgetController* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSlot_b__2(::MoleMole::UIVHSStorePicBtnWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStorePicBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS35_0__INITSLOT_B__2_OFFSET))(this, controller);
		}
	};
}
