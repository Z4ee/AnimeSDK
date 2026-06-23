#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_940;
class Class_2_3B8931CC7556B4FC;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167BE660)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONENTRANCECHANGE_OFFSET UNITYSDK_OFFSET(0x167BE840)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167BE6F0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167BDC50)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167BE0C0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x167BE1A0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_SHOWDETAILPOPUP_OFFSET UNITYSDK_OFFSET(0x167BE770)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167BE890)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0x167BE8F0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167BE970)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167BEA00)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167BEA90)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167BEB20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontWidgetController_TypeDefinitionIndex = 51065;

	class UIHandBookVoidFrontWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3B8931CC7556B4FC* _view; // 0x2C0
		::Class_2_208CC9941471731A_940* _entry; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void ShowDetailPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_SHOWDETAILPOPUP_OFFSET))(this);
		}

		::System::Void OnEntranceChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER_ONENTRANCECHANGE_OFFSET))(this, args);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__2_1(::System::Func_1<::MoleMole::UIControlReference*>* ctrl)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this, ctrl);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
