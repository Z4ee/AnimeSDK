#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
namespace MoleMole { class UIInvitationMessageWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18389870)
#define MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKTRUSTBTN_B__0_OFFSET UNITYSDK_OFFSET(0x18389880)
#define MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKTRUSTBTN_B__1_OFFSET UNITYSDK_OFFSET(0x18389920)

namespace MoleMole
{
	inline static constexpr unsigned int UIInvitationMessageWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 62671;

	class UIInvitationMessageWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIInvitationMessageWidgetController* __4__this; // 0x18
		::System::Int32 partnerID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickTrustBtn_b__0(::Class_0_16E4307DCC419505_36* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKTRUSTBTN_B__0_OFFSET))(this, msg);
		}

		::System::Void _OnClickTrustBtn_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS17_0__ONCLICKTRUSTBTN_B__1_OFFSET))(this);
		}
	};
}
