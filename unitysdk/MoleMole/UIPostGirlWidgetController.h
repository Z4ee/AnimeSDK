#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B013E97C0FA8F2E0.h"
#include "unitysdk/Enum_3_F4E08D0E9B554572.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_61F297ED27C3382F_10;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPostGirlItemWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CLEARPOSTGIRLIDS_OFFSET UNITYSDK_OFFSET(0xEB83630)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DOCLICKITEM_OFFSET UNITYSDK_OFFSET(0xEB83970)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_FORCEREFRESHSELECTITEM_OFFSET UNITYSDK_OFFSET(0xEB830A0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GETITEMWIDGETBYPOSTGIRLID_OFFSET UNITYSDK_OFFSET(0xEB84010)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0xEB83E10)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xEB83C10)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEB82ED0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xEB82FE0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSELECTPOSTGIRLFROMTYPE_OFFSET UNITYSDK_OFFSET(0xEB83680)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPECHANGE_OFFSET UNITYSDK_OFFSET(0xEB83340)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xEB832E0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEB82F60)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB82B40)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEB82E60)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0xEB83280)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET UNITYSDK_OFFSET(0xEB84090)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xEB83180)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_SETONCLICK_OFFSET UNITYSDK_OFFSET(0xEB83130)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRIGGERCURRENTCLICK_OFFSET UNITYSDK_OFFSET(0xEB83920)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRYREADNEW_OFFSET UNITYSDK_OFFSET(0xEB837F0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEB84310)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONSETSELECTTYPECHANGE_G__ONSUCCESS_19_0_OFFSET UNITYSDK_OFFSET(0xEB84410)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xEB84380)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0xEB84400)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEB84640)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xEB846D0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEB84760)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEB847F0)
#define MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEB84880)

namespace MoleMole
{
	inline static constexpr unsigned int UIPostGirlWidgetController_TypeDefinitionIndex = 53925;

	class UIPostGirlWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_61F297ED27C3382F_10* _view; // 0x2B8
		::System::Action_2<::System::Int32, ::System::Boolean>* _onClick; // 0x2C0
		::System::Collections::Generic::List_1<::System::Int32>* _postGirlIDs; // 0x2C8
		::System::Int32 _selectIdx; // 0x2D0
		::Enum_3_F4E08D0E9B554572 _selectType; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetOnClick(::System::Action_2<::System::Int32, ::System::Boolean>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_SETONCLICK_OFFSET))(this, onClick);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::System::Int32>* postGirlIDs, ::System::Int32 overrideSelectIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, postGirlIDs, overrideSelectIdx);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHDATA_OFFSET))(this);
		}

		::System::Void OnSetSelectType(::Enum_3_F4E08D0E9B554572 selectType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F4E08D0E9B554572))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPE_OFFSET))(this, selectType);
		}

		::System::Void ClearPostGirlIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_CLEARPOSTGIRLIDS_OFFSET))(this);
		}

		::System::Void OnSelectPostGirlFromType(::Enum_3_B013E97C0FA8F2E0 fromType, ::System::Int32 overrideSelectID)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B013E97C0FA8F2E0, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSELECTPOSTGIRLFROMTYPE_OFFSET))(this, fromType, overrideSelectID);
		}

		::System::Void TryReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRYREADNEW_OFFSET))(this);
		}

		::System::Void TriggerCurrentClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_TRIGGERCURRENTCLICK_OFFSET))(this);
		}

		::System::Void OnClickItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this, index);
		}

		::System::Void DoClickItem(::System::Int32 index, ::System::Boolean triggerToggle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_DOCLICKITEM_OFFSET))(this, index, triggerToggle);
		}

		::MoleMole::UIPostGirlItemWidgetController* GetItemWidget(::System::Int32 idx)
		{
			return ((::MoleMole::UIPostGirlItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GETITEMWIDGET_OFFSET))(this, idx);
		}

		::MoleMole::UIPostGirlItemWidgetController* GetItemWidgetByPostGirlID(::System::Int32 postGirlID)
		{
			return ((::MoleMole::UIPostGirlItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_GETITEMWIDGETBYPOSTGIRLID_OFFSET))(this, postGirlID);
		}

		::System::Void RefreshSelectItem(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_REFRESHSELECTITEM_OFFSET))(this, idx);
		}

		::System::Void OnSetSelectTypeChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_ONSETSELECTTYPECHANGE_OFFSET))(this);
		}

		::System::Void ForceRefreshSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER_FORCEREFRESHSELECTITEM_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__1_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this, reference);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void _OnSetSelectTypeChange_g__OnSuccess_19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER__ONSETSELECTTYPECHANGE_G__ONSUCCESS_19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPOSTGIRLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
