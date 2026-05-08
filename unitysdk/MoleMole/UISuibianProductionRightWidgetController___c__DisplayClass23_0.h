#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISuibianProductionRightWidgetController_CheckBuddyData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianProductionRightWidgetController; }

#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D7AD40)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__ONPRODUCT_B__8_OFFSET UNITYSDK_OFFSET(0x14D7AD50)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__ONPRODUCT_B__9_OFFSET UNITYSDK_OFFSET(0x14D7AD90)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController___c__DisplayClass23_0_TypeDefinitionIndex = 62887;

	class UISuibianProductionRightWidgetController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianProductionRightWidgetController_CheckBuddyData checkData; // 0x10
		::MoleMole::UISuibianProductionRightWidgetController* __4__this; // 0x20
		::System::Int32 count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProduct_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__ONPRODUCT_B__8_OFFSET))(this);
		}

		::System::Void _OnProduct_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__DISPLAYCLASS23_0__ONPRODUCT_B__9_OFFSET))(this);
		}
	};
}
