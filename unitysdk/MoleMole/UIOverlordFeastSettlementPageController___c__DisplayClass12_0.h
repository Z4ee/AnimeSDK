#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3991DF63D5D8AE7B_1;
namespace MoleMole { class UIOverlordFeastGuestEvaluateWidgetContext; }

#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17976F50)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__SETDATA_B__0_OFFSET UNITYSDK_OFFSET(0x17976F60)
#define MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__SETDATA_B__1_OFFSET UNITYSDK_OFFSET(0x17976FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastSettlementPageController___c__DisplayClass12_0_TypeDefinitionIndex = 70332;

	class UIOverlordFeastSettlementPageController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Class_3_3991DF63D5D8AE7B_1* rsp; // 0x10
		::System::Int32 itemid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__SETDATA_B__0_OFFSET))(this);
		}

		::MoleMole::UIOverlordFeastGuestEvaluateWidgetContext* _SetData_b__1(::System::Int32 guestID)
		{
			return ((::MoleMole::UIOverlordFeastGuestEvaluateWidgetContext*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSETTLEMENTPAGECONTROLLER___C__DISPLAYCLASS12_0__SETDATA_B__1_OFFSET))(this, guestID);
		}
	};
}
