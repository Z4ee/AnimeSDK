#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIComposeItemPopWindowController_Mode.h"
#include "unitysdk/MoleMole/UIComposeItemPopWindowController___c__DisplayClass33_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9_4.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_1_DFE906BA30872A01;
class Class_2_60638234271CCDB8_91;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_A67757DE8DF470D1;

#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_CLEARITEMDATA_OFFSET UNITYSDK_OFFSET(0x14E8FB10)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x14E89D30)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETRECYCLEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x14E8E430)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETSELECTITEMDATA_OFFSET UNITYSDK_OFFSET(0x14E8F5B0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETVIEWLIST_OFFSET UNITYSDK_OFFSET(0x14E8BA50)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x14E8EAB0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E87F90)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_HANDLECONSUMESHOW_OFFSET UNITYSDK_OFFSET(0x14E8B2F0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x14E88570)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14E88790)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x14E8EDA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x14E8F6E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEMINFOBTN_OFFSET UNITYSDK_OFFSET(0x14E8F780)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x14E8CC40)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x14E8A4E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E8A380)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14E8A040)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x14E8FCB0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E8A410)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E87FA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E88BF0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x14E8FAA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_RESELECTITEM_OFFSET UNITYSDK_OFFSET(0x14E8AA20)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x14E89F40)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x14E8F830)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCONFIRMBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x14E8E390)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCOUNT_OFFSET UNITYSDK_OFFSET(0x14E8E250)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCURTAB_OFFSET UNITYSDK_OFFSET(0x14E8A540)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETLIMITTEXT_OFFSET UNITYSDK_OFFSET(0x14E8E2B0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E8A480)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWCOMPOSEITEM_OFFSET UNITYSDK_OFFSET(0x14E8CDC0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWDECOMPOSEITEM_OFFSET UNITYSDK_OFFSET(0x14E8D400)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWEMPTYITEM_OFFSET UNITYSDK_OFFSET(0x14E8DED0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x14E8E580)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x14E8DA50)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWSUBITEMS_OFFSET UNITYSDK_OFFSET(0x14E8E740)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECOMPOSEITEMLIST_OFFSET UNITYSDK_OFFSET(0x14E8C0D0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECURRENCY_OFFSET UNITYSDK_OFFSET(0x14E8DF60)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEDECOMPOSEITEMLIST_OFFSET UNITYSDK_OFFSET(0x14E8C460)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEITEMLIST_OFFSET UNITYSDK_OFFSET(0x14E8B4E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATERECYCLEITEMLIST_OFFSET UNITYSDK_OFFSET(0x14E8C800)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8FD30)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__INITSCROLLVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x14E8FED0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__SELECTITEM_G__DOSELECTITEM_33_0_OFFSET UNITYSDK_OFFSET(0x14E8BF20)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E8FF90)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14E90020)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E90030)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14E90040)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E90050)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E900E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemPopWindowController_TypeDefinitionIndex = 81221;

	class UIComposeItemPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 TAG_FILTER_GROUP = 0x1; // 0x0
		::MoleMole::UIComposeItemPopWindowController_Mode _mode; // 0x310
		::Class_2_60638234271CCDB8_91* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _allItems; // 0x320
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _filteredItems; // 0x328
		::Class_1_DFE906BA30872A01* _itemInfoShow; // 0x330
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* _subItemConfigList; // 0x338
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0D6706375CDAAE8C*>* _itemDataCaches; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _subItemWidgetList; // 0x348
		::System::Int32 _price; // 0x350
		::System::Int32 _consumeItemID; // 0x354
		::Class_1_0D6706375CDAAE8C* _currencyItem; // 0x358
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x360
		::System::Int32 _selectCount; // 0x368
		::Class_1_0D6706375CDAAE8C* _jumpForItem; // 0x370
		::System::Int32 defaultSetCount; // 0x378
		::Class_2_A67757DE8DF470D1<::Class_1_0D6706375CDAAE8C*>* _sorter; // 0x380
		::System::Boolean needSetRightRegionFocus; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void SetCurTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCURTAB_OFFSET))(this, index);
		}

		::System::Void HandleConsumeShow(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_HANDLECONSUMESHOW_OFFSET))(this, show);
		}

		::System::Void ReSelectItem(::System::Int32 itemId, ::System::Boolean recollectItems, ::System::Boolean resetGamepadFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_RESELECTITEM_OFFSET))(this, itemId, recollectItems, resetGamepadFocus);
		}

		::System::Void SelectItem(::System::Int32 itemId, ::System::Boolean resetGamepadFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SELECTITEM_OFFSET))(this, itemId, resetGamepadFocus);
		}

		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* GetViewList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETVIEWLIST_OFFSET))(this);
		}

		::System::Void UpdateItemList(::System::Boolean recollectItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEITEMLIST_OFFSET))(this, recollectItems);
		}

		::System::Void UpdateComposeItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECOMPOSEITEMLIST_OFFSET))(this);
		}

		::System::Void UpdateDecomposeItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEDECOMPOSEITEMLIST_OFFSET))(this);
		}

		::System::Void UpdateRecycleItemList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATERECYCLEITEMLIST_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* GetItemData(::System::Int32 itemId)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETITEMDATA_OFFSET))(this, itemId);
		}

		::System::Void OnClickItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEM_OFFSET))(this, index);
		}

		::System::Void ShowComposeItem(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWCOMPOSEITEM_OFFSET))(this, itemData);
		}

		::System::Void SetConfirmBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCONFIRMBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void SetLimitText(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETLIMITTEXT_OFFSET))(this, key);
		}

		::System::Void ShowDecomposeItem(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWDECOMPOSEITEM_OFFSET))(this, itemData);
		}

		::System::Void ShowRecycleItem(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWRECYCLEITEM_OFFSET))(this, itemData);
		}

		::System::Void ShowEmptyItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWEMPTYITEM_OFFSET))(this);
		}

		::System::Void UpdateCurrency(::System::Int32 currencyId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECURRENCY_OFFSET))(this, currencyId);
		}

		::System::Void SetCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCOUNT_OFFSET))(this, count);
		}

		::System::Void ShowPrice(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWPRICE_OFFSET))(this, count);
		}

		::System::Void ShowSubItems(::System::Int32 ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWSUBITEMS_OFFSET))(this, ratio);
		}

		::MoleMole::UIItemIconBtnWidgetController* GetWidget(::System::Int32 index)
		{
			return ((::MoleMole::UIItemIconBtnWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETWIDGET_OFFSET))(this, index);
		}

		::System::Void OnClickConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONFIRM_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickItemInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEMINFOBTN_OFFSET))(this);
		}

		::Class_1_0D6706375CDAAE8C* GetSelectItemData(::System::Int32 itemId, ::System::Int32 count)
		{
			return ((::Class_1_0D6706375CDAAE8C*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETSELECTITEMDATA_OFFSET))(this, itemId, count);
		}

		::System::Void SendData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SENDDATA_OFFSET))(this);
		}

		::System::Void RefreshItem(::System::Int32 itemId, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>* subItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_REFRESHITEM_OFFSET))(this, itemId, subItems);
		}

		::System::Void ClearItemData(::System::Int32 itemId, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>* subItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9_4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_CLEARITEMDATA_OFFSET))(this, itemId, subItems);
		}

		::System::Void OnSortOrFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSORTORFILTERCHANGED_OFFSET))(this);
		}

		::System::Int32 GetRecycleMaxCount(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETRECYCLEMAXCOUNT_OFFSET))(this, itemData);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitScrollView_b__26_0(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__INITSCROLLVIEW_B__26_0_OFFSET))(this, binderInfo);
		}

		::System::Void _SelectItem_g__DoSelectItem_33_0(::System::Int32 tmpIndex, ::MoleMole::UIComposeItemPopWindowController___c__DisplayClass33_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIComposeItemPopWindowController___c__DisplayClass33_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__SELECTITEM_G__DOSELECTITEM_33_0_OFFSET))(this, tmpIndex, a2);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
