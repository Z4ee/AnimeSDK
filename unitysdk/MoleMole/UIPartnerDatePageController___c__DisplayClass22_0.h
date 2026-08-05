#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace MoleMole { class UIPartnerDatePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D26CB0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x17D271C0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET UNITYSDK_OFFSET(0x17D26CC0)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET UNITYSDK_OFFSET(0x17D27100)
#define MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__3_OFFSET UNITYSDK_OFFSET(0x17D27260)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDatePageController___c__DisplayClass22_0_TypeDefinitionIndex = 74035;

	class UIPartnerDatePageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1* __9__2; // 0x10
		::System::Action* __9__3; // 0x18
		::MoleMole::UIPartnerDatePageController* __4__this; // 0x20
		::System::Int32 partnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__1_OFFSET))(this);
		}

		::System::Void _OnConfirmSelect_b__2(::Class_0_16E4307DCC419505_36* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEPAGECONTROLLER___C__DISPLAYCLASS22_0__ONCONFIRMSELECT_B__2_OFFSET))(this, rsp);
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
