#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace MoleMole { class UIPartnerDatePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14857F20)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x148583B0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x14857F30)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET UNITYSDK_OFFSET(0x14858320)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET UNITYSDK_OFFSET(0x14858440)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c__DisplayClass22_0_TypeDefinitionIndex = 46491;

	class UIPartnerDatePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPartnerDatePageController* __4__this; // 0x10
		::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C* __9__2; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Int32 partnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__2(::Class_0_16E4307DCC419505_11* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET))(this, rsp);
		}

		::System::Void _OnConfirmSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET))(this);
		}
	};
}
