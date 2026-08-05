#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_F4064C0F9CEA5153.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIDepositoryPageController_ERefreshType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_79AE422BA06F6D26_10;
class Class_2_9D9172C07F82DDAE;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDepositoryPreviewWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UITabBtn01RowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_0_16E4307DCC41950C_17;
template <typename T> class Class_1_6CC1C6D9C300847E;
template <typename T> class Class_2_9B614D02A0AA9182;

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLEARNOWTABREGIST_OFFSET UNITYSDK_OFFSET(0x19F953D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x19F95DA0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET UNITYSDK_OFFSET(0x19F93E90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x19F99FC0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CURITEMHASJUMPITEMS_OFFSET UNITYSDK_OFFSET(0x19F997D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETCURRENTFILTER_OFFSET UNITYSDK_OFFSET(0x19F9AD40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETITEMSONUSEACTION_OFFSET UNITYSDK_OFFSET(0x19F99EF0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19F95910)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GOTODETAIL_OFFSET UNITYSDK_OFFSET(0x19F99A00)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITDEPOSITORYPREVIEWWIDGET_OFFSET UNITYSDK_OFFSET(0x19F99F30)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19F962A0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ISCURRENTTYPEITEM_OFFSET UNITYSDK_OFFSET(0x19F99390)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F95920)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONDEPOSITORYITEMDELNEWUPDATEBADGE_OFFSET UNITYSDK_OFFSET(0x19F96C40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19F99760)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19F99580)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19F95E40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19F95490)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCREATEDORDESTROYED_OFFSET UNITYSDK_OFFSET(0x19F97380)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONONSYNCBGPOS_OFFSET UNITYSDK_OFFSET(0x19F97490)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOWEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x19F99E20)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19F96C90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTERMARKDELETECLICK_OFFSET UNITYSDK_OFFSET(0x19F9A660)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x19F9A600)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONTABBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x19F97560)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19F95BF0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F959B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F96000)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F95A20)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENCOMPOSEUI_OFFSET UNITYSDK_OFFSET(0x19F9A1F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENDISMANTLEUI_OFFSET UNITYSDK_OFFSET(0x19F9A440)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENRECYCLEUI_OFFSET UNITYSDK_OFFSET(0x19F9A280)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENSUITFILTERPOPUP_OFFSET UNITYSDK_OFFSET(0x19F9AB70)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMNUM_OFFSET UNITYSDK_OFFSET(0x19F98590)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMSDATA_OFFSET UNITYSDK_OFFSET(0x19F975D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHFETCHBTN_OFFSET UNITYSDK_OFFSET(0x19F95840)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x19F95660)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHPREVIEWBYITEMDATA_OFFSET UNITYSDK_OFFSET(0x19F98A40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHTABNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x19F94E50)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19F96DE0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REQUIREREFRESHONSHOW_OFFSET UNITYSDK_OFFSET(0x19F95600)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0x19F97200)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARASBYINDEX_OFFSET UNITYSDK_OFFSET(0x19F99150)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x19F99C10)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEXONITEMUIDCHANGE_OFFSET UNITYSDK_OFFSET(0x19F9A1A0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x19F983F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETCURRENTTABINDEX_OFFSET UNITYSDK_OFFSET(0x19F95030)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETSCROLLSELECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x19F98EA0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETUPTAB_OFFSET UNITYSDK_OFFSET(0x19F939E0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9ADC0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_0_OFFSET UNITYSDK_OFFSET(0x19F9AE80)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_1_OFFSET UNITYSDK_OFFSET(0x19F9AE90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_2_OFFSET UNITYSDK_OFFSET(0x19F9AEA0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__REFRESHCURTABITEMSDATA_G__ADDITEMTOICONLIST_52_0_OFFSET UNITYSDK_OFFSET(0x19F988E0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x19F9AFA0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F9AFB0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19F9B040)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19F9B0D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19F9B180)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19F9B1B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19F9B1C0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F9B280)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F9B290)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19F9B2A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController_TypeDefinitionIndex = 41663;

	class UIDepositoryPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 CONTEXT_TAB_IDX_BASE = 0x1; // 0x0
		// static const ::System::UInt64 INVALID_ITEM_UID = 0xFFFFFFFFFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* registClassType; // 0x318
		::Class_2_79AE422BA06F6D26_10* _view; // 0x320
		::System::Int32 _curTabIndex; // 0x328
		::MoleMole::UIDepositoryPageController_ERefreshType _onShowRefreshType; // 0x32C
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn01RowWidgetController*>* _tabsList; // 0x330
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _tabClassTypeDict; // 0x338
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x340
		::System::Int32 _tabItemsNum; // 0x348
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _tabItems; // 0x350
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _filteredTabItems; // 0x358
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowComposeBtns; // 0x360
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowRecycleBtns; // 0x368
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowDismantleBtns; // 0x370
		::MonoUITableScrollV2* _scrollRectEx; // 0x378
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x380
		::UnityEngine::Transform* _tabContentRoot; // 0x388
		::Class_2_9B614D02A0AA9182<::Class_1_1685EC66FBD28897*>* _sorter; // 0x390
		::MoleMole::UIControllerContextBase* _cachedContext; // 0x398
		::Il2CppArray<::Enum_3_F4064C0F9CEA5153>* _tabSorters; // 0x3A0
		::Il2CppArray<::Class_1_6CC1C6D9C300847E<::Class_1_1685EC66FBD28897*>*>* _filterDataList; // 0x3A8
		::Class_0_16E4307DCC41950C_17<::Class_1_1685EC66FBD28897*>* suitFilterGroupData; // 0x3B0
		::MoleMole::UIDepositoryPreviewWidgetController* previewWidget; // 0x3B8
		::System::Int32 m_weaponTabIndex; // 0x3C0
		::System::Int32 m_equipTabIndex; // 0x3C4
		::System::Int32 m_weaponMaxNum; // 0x3C8
		::System::Int32 m_equipMaxNum; // 0x3CC
		::System::Int32 m_curSelectIndex; // 0x3D0
		::System::UInt64 m_curItemUID; // 0x3D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetupTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETUPTAB_OFFSET))(this);
		}

		::System::Boolean SetCurrentTabIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETCURRENTTABINDEX_OFFSET))(this, index);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void ClearNowTabRegist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLEARNOWTABREGIST_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnDepositoryItemDelNewUpdateBadge(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONDEPOSITORYITEMDELNEWUPDATEBADGE_OFFSET))(this, args);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ResetFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_RESETFOCUS_OFFSET))(this);
		}

		::System::Void OnItemCreatedOrDestroyed(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCREATEDORDESTROYED_OFFSET))(this, args);
		}

		::System::Void OnOnSyncBgPos(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONONSYNCBGPOS_OFFSET))(this, args);
		}

		::System::Void OnTabBtnClicked(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONTABBTNCLICKED_OFFSET))(this, index);
		}

		::System::Void RefreshTabNotificationBadge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHTABNOTIFICATIONBADGE_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIDepositoryPageController_ERefreshType type, ::System::Boolean focusToFirstItem, ::System::UInt64 selectItem, ::System::Boolean playAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDepositoryPageController_ERefreshType, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, type, focusToFirstItem, selectItem, playAnimation);
		}

		::System::Void RefreshCurTabItemNum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMNUM_OFFSET))(this);
		}

		::System::Void RefreshCurTabItemsData(::MoleMole::UIDepositoryPageController_ERefreshType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDepositoryPageController_ERefreshType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMSDATA_OFFSET))(this, type);
		}

		::System::Void SelectItemByIndex(::System::Int32 index, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEX_OFFSET))(this, index, forceRefresh);
		}

		::System::Void SetScrollSelectByIndex(::System::Boolean needScroll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETSCROLLSELECTBYINDEX_OFFSET))(this, needScroll);
		}

		::System::Void RefreshItem(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHITEM_OFFSET))(this, itemList);
		}

		::System::Void RefreshPreviewByItemData(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHPREVIEWBYITEMDATA_OFFSET))(this, itemData);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void RefreshFetchBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHFETCHBTN_OFFSET))(this);
		}

		::System::Boolean CurItemHasJumpItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CURITEMHASJUMPITEMS_OFFSET))(this);
		}

		::System::Void GotoDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GOTODETAIL_OFFSET))(this);
		}

		::System::Void OnShowEquipWeapon(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOWEQUIPWEAPON_OFFSET))(this, itemData);
		}

		::System::Void GetItemsOnUseAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETITEMSONUSEACTION_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitDepositoryPreviewWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITDEPOSITORYPREVIEWWIDGET_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnWidgetController* CreateItem(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::UIItemIconBtnWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEITEM_OFFSET))(this, binderInfo);
		}

		::System::Void SelectItemByIndexOnItemUIDChange(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEXONITEMUIDCHANGE_OFFSET))(this, index);
		}

		::System::Void OpenComposeUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENCOMPOSEUI_OFFSET))(this);
		}

		::System::Void OpenRecycleUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENRECYCLEUI_OFFSET))(this);
		}

		::System::Void OpenDismantleUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENDISMANTLEUI_OFFSET))(this);
		}

		::System::Void OnSortOrFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTORFILTERCHANGED_OFFSET))(this);
		}

		::System::Void OnSorterMarkDeleteClick(::System::Int32 OptType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTERMARKDELETECLICK_OFFSET))(this, OptType);
		}

		::System::ValueTuple_2<::Class_1_6CC1C6D9C300847E<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> CreateFilterAndSortData(::System::Collections::Generic::List_1<::System::Int32>* classTypes)
		{
			return ((::System::ValueTuple_2<::Class_1_6CC1C6D9C300847E<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET))(this, classTypes);
		}

		::System::Void OpenSuitFilterPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENSUITFILTERPOPUP_OFFSET))(this);
		}

		::Class_1_6CC1C6D9C300847E<::Class_1_1685EC66FBD28897*>* GetCurrentFilter()
		{
			return ((::Class_1_6CC1C6D9C300847E<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETCURRENTFILTER_OFFSET))(this);
		}

		::System::Void RequireRefreshOnShow(::MoleMole::UIDepositoryPageController_ERefreshType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDepositoryPageController_ERefreshType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REQUIREREFRESHONSHOW_OFFSET))(this, type);
		}

		::System::Boolean IsCurrentTypeItem(::Class_1_0D6706375CDAAE8C* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ISCURRENTTYPEITEM_OFFSET))(this, item);
		}

		::System::Void SaveJumpParasByIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARASBYINDEX_OFFSET))(this, index);
		}

		::System::Void SaveJumpParas(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARAS_OFFSET))(this, itemData);
		}

		static ::System::Void _RefreshCurTabItemsData_g__AddItemToIconList_52_0(::System::Int32& idx, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* list, ::Class_1_0D6706375CDAAE8C* data)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__REFRESHCURTABITEMSDATA_G__ADDITEMTOICONLIST_52_0_OFFSET))(idx, list, data);
		}

		::System::Void _InitView_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_0_OFFSET))(this);
		}

		::System::Void _InitView_b__67_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_1_OFFSET))(this);
		}

		::System::Void _InitView_b__67_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_2_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
