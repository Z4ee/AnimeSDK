#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_131;
class Class_2_DAA2287413BF9E42;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBuffListItemRowWidgetController_BuffListItemData; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITowerBuffListDialogContext; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_AFTERCREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0x1645B5D0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_CANSELECT_OFFSET UNITYSDK_OFFSET(0x1645B770)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1645AE80)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1645A780)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_INITSCROLLLIST_OFFSET UNITYSDK_OFFSET(0x1645ADC0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISEQUIPED_OFFSET UNITYSDK_OFFSET(0x1645B030)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISLOCK_OFFSET UNITYSDK_OFFSET(0x1645B6D0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISSELECT_OFFSET UNITYSDK_OFFSET(0x1645BB40)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONBEFORESELECT_OFFSET UNITYSDK_OFFSET(0x1645B720)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCONFIRMBTN_OFFSET UNITYSDK_OFFSET(0x1645AD20)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0x1645AD80)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1645AC20)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1645B800)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1645ACB0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1645A790)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1645A8B0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_REFRESHDATALIST_OFFSET UNITYSDK_OFFSET(0x1645B090)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1645AAB0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__AFTERCREATEITEMDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x1645BD30)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1645BBA0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__INITSCROLLLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x1645BCB0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1645BFE0)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1645C070)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1645C080)
#define MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1645C090)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityItemListDialogPopWindowController_TypeDefinitionIndex = 80327;

	class UIActivityItemListDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_DAA2287413BF9E42* _view; // 0x318
		::System::Int32 questid; // 0x320
		::MoleMole::UITowerBuffListDialogContext* context; // 0x328
		::System::Int32 MAXCOUNT; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*>* buffDataDic; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* EquipedData; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* NewEquipedData; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnConfirmBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCONFIRMBTN_OFFSET))(this);
		}

		::System::Void OnConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONCONFIRM_OFFSET))(this);
		}

		::System::Void InitScrollList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_INITSCROLLLIST_OFFSET))(this);
		}

		::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* CreateItem(::Class_2_208CC9941471731A_131* template_)
		{
			return ((::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*(*)(::PVOID, ::Class_2_208CC9941471731A_131*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_CREATEITEM_OFFSET))(this, template_);
		}

		::System::Void RefreshDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_REFRESHDATALIST_OFFSET))(this);
		}

		::System::Void AfterCreateItemData(::System::Collections::Generic::List_1<::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*>* datas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_AFTERCREATEITEMDATA_OFFSET))(this, datas);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Boolean IsLock(::System::Int32 dataid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISLOCK_OFFSET))(this, dataid);
		}

		::System::Void OnBeforeSelect(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONBEFORESELECT_OFFSET))(this, itemid);
		}

		::System::Boolean CanSelect(::System::Int32 itemid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_CANSELECT_OFFSET))(this, itemid);
		}

		::System::Void OnSelect(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ONSELECT_OFFSET))(this, itemid);
		}

		::System::Boolean IsEquiped(::System::Int32 itemid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISEQUIPED_OFFSET))(this, itemid);
		}

		::System::Boolean IsSelect(::System::Int32 itemid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER_ISSELECT_OFFSET))(this, itemid);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitScrollList_b__11_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__INITSCROLLLIST_B__11_0_OFFSET))(this, reference);
		}

		::System::Int32 _AfterCreateItemData_b__14_0(::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* a, ::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*, ::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER__AFTERCREATEITEMDATA_B__14_0_OFFSET))(this, a, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYITEMLISTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
