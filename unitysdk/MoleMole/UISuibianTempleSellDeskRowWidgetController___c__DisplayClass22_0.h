#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleSellDeskRowWidgetController; }

#define MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157B4D80)
#define MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHONCEENDTIME_B__0_OFFSET UNITYSDK_OFFSET(0x157B4D90)
#define MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHONCEENDTIME_B__1_OFFSET UNITYSDK_OFFSET(0x157B4DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleSellDeskRowWidgetController___c__DisplayClass22_0_TypeDefinitionIndex = 67149;

	class UISuibianTempleSellDeskRowWidgetController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianTempleSellDeskRowWidgetController* __4__this; // 0x10
		::System::Int64 onceTime; // 0x18
		::System::Single alreadyTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Single _RefreshOnceEndTime_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHONCEENDTIME_B__0_OFFSET))(this);
		}

		::System::Void _RefreshOnceEndTime_b__1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLESELLDESKROWWIDGETCONTROLLER___C__DISPLAYCLASS22_0__REFRESHONCEENDTIME_B__1_OFFSET))(this, value);
		}
	};
}
