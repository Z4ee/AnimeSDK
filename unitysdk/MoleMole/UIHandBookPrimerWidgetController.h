#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_14B0BFEBE8C5942A;
class Class_2_208CC9941471731A_917;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHandBookPrimerWidgetController_TabItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_CREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A3252C0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_FINDDEFAULTTABINDEX_OFFSET UNITYSDK_OFFSET(0x1A325920)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_GETNEWBIETARGETMODULEID_OFFSET UNITYSDK_OFFSET(0x1A325540)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x1A324730)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3251B0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A325110)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A325240)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A3243E0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A324580)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A324F30)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A325B90)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A325C00)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A325C90)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A325D30)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A325DC0)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A325E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController_TypeDefinitionIndex = 40900;

	class UIHandBookPrimerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_14B0BFEBE8C5942A* _view; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookPrimerWidgetController_TabItem*>* _tabItems; // 0x2C8
		::System::Int32 _activatedTab; // 0x2D0
		::System::Boolean isInit; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowTabContext(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_SHOWTABCONTEXT_OFFSET))(this, idx);
		}

		::MoleMole::UIBaseController* CreateController(::Class_2_208CC9941471731A_917* template_)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::Class_2_208CC9941471731A_917*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_CREATECONTROLLER_OFFSET))(this, template_);
		}

		::System::Int32 GetNewbieTargetModuleID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_GETNEWBIETARGETMODULEID_OFFSET))(this);
		}

		::System::Int32 FindDefaultTabIndex(::System::Int32 targetModuleID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_FINDDEFAULTTABINDEX_OFFSET))(this, targetModuleID);
		}

		::System::Int32 InitTab(::MoleMole::UIHandBookPopWindowController_EHandBookTab type, ::System::Int32 contextModuleID)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER_INITTAB_OFFSET))(this, type, contextModuleID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
