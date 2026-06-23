#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_14B0BFEBE8C5942A_9;
class Class_2_208CC9941471731A_940;
class MonoUITableScrollV2;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookManualWidgetController_TabItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_CREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x16F7F330)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GETCURRENTHBID_OFFSET UNITYSDK_OFFSET(0x16F7F1E0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GETCURRENTTABITEM_OFFSET UNITYSDK_OFFSET(0x16F7F2B0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GET_TABBTNSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16F7F1C0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16F7DFB0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x16F7E310)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F7F0B0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F7F010)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F7F140)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F7DFC0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F7E160)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_REFRESHWISHLISTCONSOLEMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16F7F9A0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET UNITYSDK_OFFSET(0x16F7EE30)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_UPDATEWISHLISTSYSTEMPLAN_OFFSET UNITYSDK_OFFSET(0x16F7F790)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7FA70)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F7FAF0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16F7FB80)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F7FC20)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16F7FCB0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16F7FD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController_TypeDefinitionIndex = 82135;

	class UIHandBookManualWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_14B0BFEBE8C5942A_9* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookManualWidgetController_TabItem*>* _tabItems; // 0x2C8
		::System::Int32 _activatedTab; // 0x2D0
		::System::Boolean isInit; // 0x2D4
		::MoleMole::UIHandBookPopWindowController_EHandBookTab _handBookTab; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_TabBtnScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GET_TABBTNSCROLLVIEW_OFFSET))(this);
		}

		::System::Int32 GetCurrentHBID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GETCURRENTHBID_OFFSET))(this);
		}

		::MoleMole::UIHandBookManualWidgetController_TabItem* GetCurrentTabItem()
		{
			return ((::MoleMole::UIHandBookManualWidgetController_TabItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_GETCURRENTTABITEM_OFFSET))(this);
		}

		::System::Void ShowTabContext(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET))(this, idx);
		}

		::MoleMole::UIBaseController* CreateController(::Class_2_208CC9941471731A_940* template_)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Class_2_208CC9941471731A_940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_CREATECONTROLLER_OFFSET))(this, template_);
		}

		::System::Int32 InitTab(::MoleMole::UIHandBookPopWindowController_EHandBookTab type, ::System::Int32 targetModuleID)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_INITTAB_OFFSET))(this, type, targetModuleID);
		}

		::System::Void UpdateWishlistSystemPlan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_UPDATEWISHLISTSYSTEMPLAN_OFFSET))(this);
		}

		::System::Void RefreshWishlistConsoleModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_REFRESHWISHLISTCONSOLEMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
