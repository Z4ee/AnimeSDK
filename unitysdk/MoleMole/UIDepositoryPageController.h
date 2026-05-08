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
class Class_2_79AE422BA06F6D26_154;
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
template <typename T> class Class_0_16E4307DCC419505_138;
template <typename T> class Class_1_A71D2AA0025EF256;
template <typename T> class Class_2_A67757DE8DF470D1;

#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLEARNOWTABREGIST_OFFSET UNITYSDK_OFFSET(0x16CBBB40)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x16CBC530)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET UNITYSDK_OFFSET(0x16CBA600)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x16CC0690)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CURITEMHASJUMPITEMS_OFFSET UNITYSDK_OFFSET(0x16CBFF20)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETCURRENTFILTER_OFFSET UNITYSDK_OFFSET(0x16CC12B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETITEMSONUSEACTION_OFFSET UNITYSDK_OFFSET(0x16CC05C0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16CBC0A0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GOTODETAIL_OFFSET UNITYSDK_OFFSET(0x16CC0160)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITDEPOSITORYPREVIEWWIDGET_OFFSET UNITYSDK_OFFSET(0x16CC0600)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16CBCA30)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ISCURRENTTYPEITEM_OFFSET UNITYSDK_OFFSET(0x16CBFAE0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CBC0B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONDEPOSITORYITEMDELNEWUPDATEBADGE_OFFSET UNITYSDK_OFFSET(0x16CBD3D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16CBFEB0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16CBFCD0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16CBC5D0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x16CBBC00)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONITEMCREATEDORDESTROYED_OFFSET UNITYSDK_OFFSET(0x16CBDB10)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONONSYNCBGPOS_OFFSET UNITYSDK_OFFSET(0x16CBDC20)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOWEQUIPWEAPON_OFFSET UNITYSDK_OFFSET(0x16CC04F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16CBD420)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTERMARKDELETECLICK_OFFSET UNITYSDK_OFFSET(0x16CC0C90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0x16CC0C30)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONTABBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16CBDCF0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16CBC380)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CBC140)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CBC790)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CBC1B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENCOMPOSEUI_OFFSET UNITYSDK_OFFSET(0x16CC08C0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENDISMANTLEUI_OFFSET UNITYSDK_OFFSET(0x16CC0AC0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENRECYCLEUI_OFFSET UNITYSDK_OFFSET(0x16CC0950)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENSUITFILTERPOPUP_OFFSET UNITYSDK_OFFSET(0x16CC1130)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMNUM_OFFSET UNITYSDK_OFFSET(0x16CBED90)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHCURTABITEMSDATA_OFFSET UNITYSDK_OFFSET(0x16CBDD60)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHFETCHBTN_OFFSET UNITYSDK_OFFSET(0x16CBBFC0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHITEM_OFFSET UNITYSDK_OFFSET(0x16CBBDD0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHPREVIEWBYITEMDATA_OFFSET UNITYSDK_OFFSET(0x16CBF230)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHTABNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x16CBB5C0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16CBD570)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_REQUIREREFRESHONSHOW_OFFSET UNITYSDK_OFFSET(0x16CBBD70)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0x16CBD990)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARASBYINDEX_OFFSET UNITYSDK_OFFSET(0x16CBF940)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SAVEJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x16CC02E0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEXONITEMUIDCHANGE_OFFSET UNITYSDK_OFFSET(0x16CC0870)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SELECTITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x16CBEC30)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETCURRENTTABINDEX_OFFSET UNITYSDK_OFFSET(0x16CBB7A0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETSCROLLSELECTBYINDEX_OFFSET UNITYSDK_OFFSET(0x16CBF690)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_SETUPTAB_OFFSET UNITYSDK_OFFSET(0x16CBA150)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC1330)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_0_OFFSET UNITYSDK_OFFSET(0x16CC13F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_1_OFFSET UNITYSDK_OFFSET(0x16CC1400)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__INITVIEW_B__67_2_OFFSET UNITYSDK_OFFSET(0x16CC1410)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER__REFRESHCURTABITEMSDATA_G__ADDITEMTOICONLIST_52_0_OFFSET UNITYSDK_OFFSET(0x16CBF0E0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x16CC1510)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16CC1520)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16CC15B0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16CC1640)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16CC16F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16CC1720)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16CC1730)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16CC17F0)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16CC1800)
#define MOLEMOLE_UIDEPOSITORYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16CC1810)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryPageController_TypeDefinitionIndex = 77125;

	class UIDepositoryPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 CONTEXT_TAB_IDX_BASE = 0x1; // 0x0
		// static const ::System::UInt64 INVALID_ITEM_UID = 0xFFFFFFFFFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* registClassType; // 0x310
		::Class_2_79AE422BA06F6D26_154* _view; // 0x318
		::System::Int32 _curTabIndex; // 0x320
		::MoleMole::UIDepositoryPageController_ERefreshType _onShowRefreshType; // 0x324
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn01RowWidgetController*>* _tabsList; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _tabClassTypeDict; // 0x330
		::Class_2_9D9172C07F82DDAE* _itemModel; // 0x338
		::System::Int32 _tabItemsNum; // 0x340
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _tabItems; // 0x348
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _filteredTabItems; // 0x350
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowComposeBtns; // 0x358
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowRecycleBtns; // 0x360
		::System::Collections::Generic::List_1<::System::Boolean>* _tabShowDismantleBtns; // 0x368
		::MonoUITableScrollV2* _scrollRectEx; // 0x370
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x378
		::UnityEngine::Transform* _tabContentRoot; // 0x380
		::Class_2_A67757DE8DF470D1<::Class_1_1685EC66FBD28897*>* _sorter; // 0x388
		::MoleMole::UIControllerContextBase* _cachedContext; // 0x390
		::Il2CppArray<::Enum_3_F4064C0F9CEA5153>* _tabSorters; // 0x398
		::Il2CppArray<::Class_1_A71D2AA0025EF256<::Class_1_1685EC66FBD28897*>*>* _filterDataList; // 0x3A0
		::Class_0_16E4307DCC419505_138<::Class_1_1685EC66FBD28897*>* suitFilterGroupData; // 0x3A8
		::MoleMole::UIDepositoryPreviewWidgetController* previewWidget; // 0x3B0
		::System::Int32 m_weaponTabIndex; // 0x3B8
		::System::Int32 m_equipTabIndex; // 0x3BC
		::System::Int32 m_weaponMaxNum; // 0x3C0
		::System::Int32 m_equipMaxNum; // 0x3C4
		::System::Int32 m_curSelectIndex; // 0x3C8
		::System::UInt64 m_curItemUID; // 0x3D0

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

		::System::ValueTuple_2<::Class_1_A71D2AA0025EF256<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> CreateFilterAndSortData(::System::Collections::Generic::List_1<::System::Int32>* classTypes)
		{
			return ((::System::ValueTuple_2<::Class_1_A71D2AA0025EF256<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET))(this, classTypes);
		}

		::System::Void OpenSuitFilterPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_OPENSUITFILTERPOPUP_OFFSET))(this);
		}

		::Class_1_A71D2AA0025EF256<::Class_1_1685EC66FBD28897*>* GetCurrentFilter()
		{
			return ((::Class_1_A71D2AA0025EF256<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYPAGECONTROLLER_GETCURRENTFILTER_OFFSET))(this);
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
