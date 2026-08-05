#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIHollowCardItemCollectPageController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_406;
class Class_2_208CC9941471731A_988;
class Class_2_79AE422BA06F6D26_141;
class Class_2_AB2EF02AB0EB9012;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBackendRelicCollectWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIBranchRelciCollectWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowAbyssS2ItemWidgetController; }
namespace MoleMole { class UIHollowCardCollectWidgetController; }
namespace MoleMole { class UIHollowCardCollectWidgetControllerContext; }
namespace MoleMole { class UIHollowClueCollectWidgetController; }
namespace MoleMole { class UIHollowErosionWidgetController; }
namespace MoleMole { class UIHollowResearchProgressWidgetController; }
namespace MoleMole { class UIHollowSpecialAreaWidgetController; }
namespace MoleMole { class UIHollowTeamPreviewWidgetController; }
namespace MoleMole { class UIHollowWeaponCollectWidgetController; }
namespace MoleMole { class UITabBtn03RowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x164C5240)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCARDWIDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A32B560)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCTRL_OFFSET UNITYSDK_OFFSET(0x164C5DE0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCURRENTREWARDBADGETYPE_OFFSET UNITYSDK_OFFSET(0x1A329F50)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETRESEARCHPROGRESSCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x164C6620)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1A329590)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A3295A0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0x164C5EE0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITTOPTABS_OFFSET UNITYSDK_OFFSET(0x1A329A20)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0x164C5170)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONABYSSTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x1A329E40)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLICKVIDEOBTN_OFFSET UNITYSDK_OFFSET(0x164C69B0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLOSEREFRESHHALLDATA_OFFSET UNITYSDK_OFFSET(0x1A32B440)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A3295B0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONDATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A32A720)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A32A3B0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGOTOREWARDBTN_OFFSET UNITYSDK_OFFSET(0x1A32A610)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x164C75E0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A32A7F0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x164C6000)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A32B290)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164C7A40)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A329640)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A32A950)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHORIGINALBADGETYPELIST_OFFSET UNITYSDK_OFFSET(0x164C4850)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTAKENPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A329FC0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTEX_OFFSET UNITYSDK_OFFSET(0x164C4CC0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHSYSTEMREDPOINT_OFFSET UNITYSDK_OFFSET(0x1A32A4F0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTABREDPOINT_OFFSET UNITYSDK_OFFSET(0x164C7770)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x164C6CA0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A32A780)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SORTCFGS_OFFSET UNITYSDK_OFFSET(0x164C4F20)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYCANCELSELECT_OFFSET UNITYSDK_OFFSET(0x164C6730)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYPOPTIPSANDCLEARUNLOCKNEWGENREWINDOW_OFFSET UNITYSDK_OFFSET(0x1A32AAD0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYSELECTCTRL_OFFSET UNITYSDK_OFFSET(0x164C62E0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164C7CD0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_0_OFFSET UNITYSDK_OFFSET(0x164C7CE0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_1_OFFSET UNITYSDK_OFFSET(0x164C7D10)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONCLICKVIDEOBTN_B__40_0_OFFSET UNITYSDK_OFFSET(0x164C7D80)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONTABSELECTHANDLE_B__36_0_OFFSET UNITYSDK_OFFSET(0x164C7D40)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x164C7DB0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x164C7E40)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x164C7ED0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x164C7F60)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x164C7F70)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164C8030)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x164C8040)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x164C8050)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x164C80E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController_TypeDefinitionIndex = 53989;

	class UIHollowCardItemCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_141* _view; // 0x318
		::System::Int32 _curAbyssGroupId; // 0x320
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBaseController*>* _ctrlDic; // 0x328
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_988*>* m_sortedTabList; // 0x330
		::MoleMole::UIHollowCardItemCollectPageController_TabType m_tabType; // 0x338
		::MoleMole::UIHollowCardItemCollectPageController_TabType m_lastTabType; // 0x33C
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowWidgetController*>* m_tabList; // 0x340
		::System::Collections::Generic::List_1<::System::Int32>* m_tabIdList; // 0x348
		::System::Boolean m_tabInited; // 0x350
		::MoleMole::UIHollowCardCollectWidgetController* _cardWidgetCtrl; // 0x358
		::MoleMole::UIHollowErosionWidgetController* _erosionWidgetCtrl; // 0x360
		::MoleMole::UIHollowResearchProgressWidgetController* _progWidgetCtrl; // 0x368
		::MoleMole::UIHollowSpecialAreaWidgetController* _specialAreaWidgetCtrl; // 0x370
		::MoleMole::UIHollowClueCollectWidgetController* _clueCollectWidgetCtrl; // 0x378
		::MoleMole::UIHollowCardCollectWidgetController* _s2CardWidgetCtrl; // 0x380
		::MoleMole::UIHollowTeamPreviewWidgetController* _s2TeamCollectWidgetCtrl; // 0x388
		::MoleMole::UIHollowWeaponCollectWidgetController* _s2WeaponCollectWidgetCtrl; // 0x390
		::MoleMole::UIBranchRelciCollectWidgetController* _s2BranchRelicCollectWidgetCtrl; // 0x398
		::MoleMole::UIHollowAbyssS2ItemWidgetController* _s2ItemCollectWidgetCtrl; // 0x3A0
		::MoleMole::UIBackendRelicCollectWidgetController* _s2BackendRelicCollectWidgetCtrl; // 0x3A8
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitTopTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITTOPTABS_OFFSET))(this);
		}

		::System::Void OnAbyssTabSelectHandle(::System::Int32 abyssGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONABYSSTABSELECTHANDLE_OFFSET))(this, abyssGroup);
		}

		::Share::ENotificationBadgeType GetCurrentRewardBadgeType()
		{
			return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCURRENTREWARDBADGETYPE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void RefreshSystemRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHSYSTEMREDPOINT_OFFSET))(this);
		}

		::System::Void OnGotoRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGOTOREWARDBTN_OFFSET))(this);
		}

		::System::Void OnDateUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONDATEUPDATE_OFFSET))(this, args);
		}

		::System::Void RefreshRewardTakenProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTAKENPROGRESS_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCloseRefreshHallData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLOSEREFRESHHALLDATA_OFFSET))(this);
		}

		::System::Void TryPopTipsAndClearUnlockNewGenreWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYPOPTIPSANDCLEARUNLOCKNEWGENREWINDOW_OFFSET))(this);
		}

		::MoleMole::UIHollowCardCollectWidgetControllerContext* GetCardWidgetContext(::System::Int32 abyssGroupId)
		{
			return ((::MoleMole::UIHollowCardCollectWidgetControllerContext*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCARDWIDGETCONTEXT_OFFSET))(this, abyssGroupId);
		}

		::System::Collections::Generic::List_1<::System::Int32>* RefreshOriginalBadgeTypeList(::System::Int32 abyssGroupId)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHORIGINALBADGETYPELIST_OFFSET))(this, abyssGroupId);
		}

		::System::Void RefreshRewardTex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTEX_OFFSET))(this);
		}

		::System::Void SortCfgs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SORTCFGS_OFFSET))(this);
		}

		::System::Void InitWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITWIDGET_OFFSET))(this);
		}

		::MoleMole::UIBaseController* CreateWidget(::System::Int32 tabID)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CREATEWIDGET_OFFSET))(this, tabID);
		}

		::MoleMole::UIBaseController* GetCtrl(::System::Int32 tabID)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCTRL_OFFSET))(this, tabID);
		}

		::System::Void GoToMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::System::Void OnTabSelectHandle(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET))(this, tabID);
		}

		::System::Void TrySelectCtrl(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYSELECTCTRL_OFFSET))(this, tabID);
		}

		::System::Void TryCancelSelect(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYCANCELSELECT_OFFSET))(this, tabID);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_406*>* GetResearchProgressConfigList(::MoleMole::UIHollowCardItemCollectPageController_TabType type)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_406*>*(*)(::PVOID, ::MoleMole::UIHollowCardItemCollectPageController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETRESEARCHPROGRESSCONFIGLIST_OFFSET))(this, type);
		}

		::System::Void OnClickVideoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLICKVIDEOBTN_OFFSET))(this);
		}

		::System::Void RefreshTab(::System::Int32 abyssGroupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTAB_OFFSET))(this, abyssGroupId);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshTabRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTABREDPOINT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _InitTopTabs_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_0_OFFSET))(this);
		}

		::System::Void _InitTopTabs_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_1_OFFSET))(this);
		}

		::System::Boolean _OnTabSelectHandle_b__36_0(::Class_2_208CC9941471731A_988* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_988*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONTABSELECTHANDLE_B__36_0_OFFSET))(this, x);
		}

		::System::Boolean _OnClickVideoBtn_b__40_0(::Class_2_208CC9941471731A_988* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_988*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONCLICKVIDEOBTN_B__40_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
