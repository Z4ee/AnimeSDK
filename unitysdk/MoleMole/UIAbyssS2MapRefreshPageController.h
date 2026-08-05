#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_18814BC9826CDED5;
class Class_2_208CC9941471731A_33;
class Class_2_208CC9941471731A_477;
class Class_2_98736CDE0D50D077;
class Class_3_C85FE8723112A032;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2InlevelMapAreaWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CHECKNEEDSORTPROPS_OFFSET UNITYSDK_OFFSET(0x11D8B900)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CREATEMAPREFRESHPROPINFO_OFFSET UNITYSDK_OFFSET(0x11D8B700)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CREATEPROPLIST_OFFSET UNITYSDK_OFFSET(0x11D8BCB0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_GETSELECTEDPROPSID_OFFSET UNITYSDK_OFFSET(0x11D8AED0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11D8A900)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_INITPROPS_OFFSET UNITYSDK_OFFSET(0x11D8C300)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCLICKITEMEXPEND_OFFSET UNITYSDK_OFFSET(0x11D8C510)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x11D8C0D0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D8A910)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x11D8CC10)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11D8ACB0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONREFRESHBTN_OFFSET UNITYSDK_OFFSET(0x11D8B010)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONTIPSCLICK_OFFSET UNITYSDK_OFFSET(0x11D8AE00)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D8CD90)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D8A9A0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D8CB40)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHMAPINTERNALASYNC_OFFSET UNITYSDK_OFFSET(0x11D8B260)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x11D8B1B0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHONEPROP_OFFSET UNITYSDK_OFFSET(0x11D8B400)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHPROPS_OFFSET UNITYSDK_OFFSET(0x11D8BAD0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SELECTEDPROPSID_OFFSET UNITYSDK_OFFSET(0x11D8AF40)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SENDREFRESHMAPREQ_OFFSET UNITYSDK_OFFSET(0x11D8C1F0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SORTPROPS_OFFSET UNITYSDK_OFFSET(0x11D8C9C0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_UPDATEMAPANDPROPS_OFFSET UNITYSDK_OFFSET(0x11D8B350)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8CE10)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__INITPROPS_B__19_0_OFFSET UNITYSDK_OFFSET(0x11D8CEA0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11D8CFA0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11D8D030)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11D8D060)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11D8D070)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11D8D080)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController_TypeDefinitionIndex = 91332;

	class UIAbyssS2MapRefreshPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_98736CDE0D50D077* _view; // 0x318
		::MoleMole::UIAbyssS2InlevelMapAreaWidgetController* _map; // 0x320
		::System::Threading::CancellationTokenSource* _cts; // 0x328
		::System::Boolean _canExpend; // 0x330
		::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>* _propList; // 0x338
		::System::Boolean _inRefresh; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnTipsClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONTIPSCLICK_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> GetSelectedPropsId()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_GETSELECTEDPROPSID_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> SelectedPropsId(::System::Int32 selectedIndex)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SELECTEDPROPSID_OFFSET))(this, selectedIndex);
		}

		::System::Void OnRefreshBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONREFRESHBTN_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask RefreshMap(::System::Int32 itemId)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHMAP_OFFSET))(this, itemId);
		}

		::Cysharp::Threading::Tasks::UniTask RefreshMapInternalAsync(::System::Int32 itemId, ::System::Threading::CancellationTokenSource* cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHMAPINTERNALASYNC_OFFSET))(this, itemId, cts);
		}

		::Cysharp::Threading::Tasks::UniTask UpdateMapAndProps(::System::Boolean needReSortProps, ::System::Threading::CancellationToken ctsToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_UPDATEMAPANDPROPS_OFFSET))(this, needReSortProps, ctsToken);
		}

		::System::Void RefreshOneProp(::System::Int32 selectId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHONEPROP_OFFSET))(this, selectId);
		}

		::System::Boolean CheckNeedSortProps(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CHECKNEEDSORTPROPS_OFFSET))(this, itemId);
		}

		::System::Void RefreshProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_REFRESHPROPS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_C85FE8723112A032*>> SendRefreshMapReq(::System::Int32 targetRouteMapID, ::System::Threading::CancellationToken ctsToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_C85FE8723112A032*>>(*)(::PVOID, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SENDREFRESHMAPREQ_OFFSET))(this, targetRouteMapID, ctsToken);
		}

		::System::Void InitProps()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_INITPROPS_OFFSET))(this);
		}

		::System::Void OnClickItemExpend(::System::Boolean isSelected, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCLICKITEMEXPEND_OFFSET))(this, isSelected, index);
		}

		::System::Void OnClickItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONCLICKITEM_OFFSET))(this, index);
		}

		::System::Void CreatePropList(::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>*& propList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CREATEPROPLIST_OFFSET))(this, propList);
		}

		static ::System::Void SortProps(::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>* propList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_18814BC9826CDED5*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_SORTPROPS_OFFSET))(propList);
		}

		static ::Class_1_18814BC9826CDED5* CreateMapRefreshPropInfo(::Class_2_208CC9941471731A_33* prop, ::Class_2_208CC9941471731A_477* itemConfig)
		{
			return ((::Class_1_18814BC9826CDED5*(*)(::Class_2_208CC9941471731A_33*, ::Class_2_208CC9941471731A_477*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_CREATEMAPREFRESHPROPINFO_OFFSET))(prop, itemConfig);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnDetailBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONDETAILBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitProps_b__19_0(::Struct_2_575273D27F02957E info)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__INITPROPS_B__19_0_OFFSET))(this, info);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
