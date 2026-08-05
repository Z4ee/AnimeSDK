#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattlePVEV2PageController; }

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEFAA0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS24_0__INITTOPTABBTNS_B__1_OFFSET UNITYSDK_OFFSET(0x18BEFAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController___c__DisplayClass24_0_TypeDefinitionIndex = 81481;

	class UIAutoBattlePVEV2PageController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattlePVEV2PageController* __4__this; // 0x10
		::System::Boolean unlock; // 0x18
		::System::Int32 index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitTopTabBtns_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___C__DISPLAYCLASS24_0__INITTOPTABBTNS_B__1_OFFSET))(this);
		}
	};
}
