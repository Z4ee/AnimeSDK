#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIComposeItemPopWindowController_Mode.h"
#include "unitysdk/MoleMole/UIComposeItemPopWindowController___c__DisplayClass33_0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_3659D99D9E0DCBB9.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_1_DFE906BA30872A01;
class Class_2_60638234271CCDB8_69;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_50F24C840F0D002C;

#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_CLEARITEMDATA_OFFSET UNITYSDK_OFFSET(0x1525BFD0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x152561B0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETRECYCLEMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1525A8C0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETSELECTITEMDATA_OFFSET UNITYSDK_OFFSET(0x1525BA70)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETVIEWLIST_OFFSET UNITYSDK_OFFSET(0x15257EA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GETWIDGET_OFFSET UNITYSDK_OFFSET(0x1525AF70)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15254400)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_HANDLECONSUMESHOW_OFFSET UNITYSDK_OFFSET(0x15257750)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x152549E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15254C00)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x1525B260)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x1525BBA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEMINFOBTN_OFFSET UNITYSDK_OFFSET(0x1525BC40)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x152590C0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x15256950)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x152567F0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x152564C0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x1525C170)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15256880)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15254410)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15255060)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x1525BF60)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_RESELECTITEM_OFFSET UNITYSDK_OFFSET(0x15256E80)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SELECTITEM_OFFSET UNITYSDK_OFFSET(0x152563C0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1525BCF0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCONFIRMBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1525A820)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCOUNT_OFFSET UNITYSDK_OFFSET(0x1525A6E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETCURTAB_OFFSET UNITYSDK_OFFSET(0x152569B0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETLIMITTEXT_OFFSET UNITYSDK_OFFSET(0x1525A740)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x152568F0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWCOMPOSEITEM_OFFSET UNITYSDK_OFFSET(0x15259240)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWDECOMPOSEITEM_OFFSET UNITYSDK_OFFSET(0x15259880)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWEMPTYITEM_OFFSET UNITYSDK_OFFSET(0x1525A350)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0x1525AA10)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x15259ED0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_SHOWSUBITEMS_OFFSET UNITYSDK_OFFSET(0x1525ABD0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECOMPOSEITEMLIST_OFFSET UNITYSDK_OFFSET(0x15258540)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATECURRENCY_OFFSET UNITYSDK_OFFSET(0x1525A3E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEDECOMPOSEITEMLIST_OFFSET UNITYSDK_OFFSET(0x152588E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATEITEMLIST_OFFSET UNITYSDK_OFFSET(0x15257940)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_UPDATERECYCLEITEMLIST_OFFSET UNITYSDK_OFFSET(0x15258C80)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1525C1F0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__INITSCROLLVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x1525C380)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER__SELECTITEM_G__DOSELECTITEM_33_0_OFFSET UNITYSDK_OFFSET(0x15258390)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1525C440)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1525C4D0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1525C4E0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1525C4F0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1525C500)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1525C590)

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemPopWindowController_TypeDefinitionIndex = 78465;

	class UIComposeItemPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 TAG_FILTER_GROUP = 0x1; // 0x0
		::MoleMole::UIComposeItemPopWindowController_Mode _mode; // 0x318
		::Class_2_60638234271CCDB8_69* _view; // 0x320
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _allItems; // 0x328
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* _filteredItems; // 0x330
		::Class_1_DFE906BA30872A01* _itemInfoShow; // 0x338
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* _subItemConfigList; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0D6706375CDAAE8C*>* _itemDataCaches; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* _subItemWidgetList; // 0x350
		::System::Int32 _price; // 0x358
		::System::Int32 _consumeItemID; // 0x35C
		::Class_1_0D6706375CDAAE8C* _currencyItem; // 0x360
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x368
		::System::Int32 _selectCount; // 0x370
		::Class_1_0D6706375CDAAE8C* _jumpForItem; // 0x378
		::System::Int32 defaultSetCount; // 0x380
		::Class_2_50F24C840F0D002C<::Class_1_0D6706375CDAAE8C*>* _sorter; // 0x388
		::System::Boolean needSetRightRegionFocus; // 0x390

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

		::System::Void RefreshItem(::System::Int32 itemId, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* subItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_REFRESHITEM_OFFSET))(this, itemId, subItems);
		}

		::System::Void ClearItemData(::System::Int32 itemId, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>* subItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_3659D99D9E0DCBB9>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER_CLEARITEMDATA_OFFSET))(this, itemId, subItems);
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
