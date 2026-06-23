#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIIncomeNumWidgetController; }

#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152786D0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHINCOME_B__0_OFFSET UNITYSDK_OFFSET(0x152786E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopTurnOverWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 44781;

	class UIFlowerShopTurnOverWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIIncomeNumWidgetController* numWidget; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshInCome_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHINCOME_B__0_OFFSET))(this);
		}
	};
}
