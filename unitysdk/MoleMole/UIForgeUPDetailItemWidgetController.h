#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_200;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19724140)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19724240)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x197241D0)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x197242A0)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19724320)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x19724410)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19724750)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197247B0)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19724840)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x197248D0)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19724970)
#define MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19724A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIForgeUPDetailItemWidgetController_TypeDefinitionIndex = 73490;

	class UIForgeUPDetailItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_200* _view; // 0x2C0
		::System::Int32 itemID; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORGEUPDETAILITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
