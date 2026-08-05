#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_36;
class Class_2_208CC9941471731A_1167;
class Class_2_79AE422BA06F6D26_226;
class Class_2_C3BEF2A3EE58BD43;
namespace MoleMole { class UIABLineupCampItemWidgetController; }
namespace MoleMole { class UIAutoBattlePveTabBtnRowWidgetController; }
namespace MoleMole { class UIAutoBattlePveTopTabBtnRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_CHECKTUTORIALPROGRESS_OFFSET UNITYSDK_OFFSET(0x16013980)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_CUREXTERNALLEVELCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x16011CF0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x16011C30)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16011C20)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x160120A0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITTOPTABBTNS_OFFSET UNITYSDK_OFFSET(0x16013B90)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISQUESTLOCK_OFFSET UNITYSDK_OFFSET(0x160165E0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISTOPTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x16016150)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKLEFTTAB_OFFSET UNITYSDK_OFFSET(0x16017190)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKTOPTAB_OFFSET UNITYSDK_OFFSET(0x160170A0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16011DA0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONSTARTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x160173C0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16013FC0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16011E30)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16012C70)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHLEFTTABS_OFFSET UNITYSDK_OFFSET(0x16016800)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHPOPUP_OFFSET UNITYSDK_OFFSET(0x16015210)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x16014C90)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16014660)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CHECKTUTORIALPROGRESS_B__23_0_OFFSET UNITYSDK_OFFSET(0x160176A0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16017560)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__INITTOPTABBTNS_B__24_0_OFFSET UNITYSDK_OFFSET(0x16017D90)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__ONSTARTBTNCLICK_B__31_0_OFFSET UNITYSDK_OFFSET(0x16018060)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHLEFTTABS_B__27_0_OFFSET UNITYSDK_OFFSET(0x16017DA0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHREWARD_B__22_0_OFFSET UNITYSDK_OFFSET(0x16017670)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16018090)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160180E0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160180F0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16018100)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController_TypeDefinitionIndex = 81476;

	class UIAutoBattlePVEV2PageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_226* _view; // 0x318
		::Class_2_C3BEF2A3EE58BD43* _model; // 0x320
		::System::Int32 _curTopIndex; // 0x328
		::System::Int32 _curLevelID; // 0x32C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1167*>*>* _dataDict; // 0x330
		::MoleMole::UIABLineupCampItemWidgetController* _campWidget; // 0x338
		::System::Collections::Generic::List_1<::System::Int32>* _keys; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattlePveTopTabBtnRowWidgetController*>* _topTabWidgets; // 0x348
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIAutoBattlePveTabBtnRowWidgetController*>* _leftTabWidgets; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Keys()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1167*>* get_CurExternalLevelConfigList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1167*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_CUREXTERNALLEVELCONFIGLIST_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITDATA_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Void CheckTutorialProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_CHECKTUTORIALPROGRESS_OFFSET))(this);
		}

		::System::Void InitTopTabBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITTOPTABBTNS_OFFSET))(this);
		}

		::System::Boolean IsTopTabUnLock(::System::Int32 index, ::System::Boolean showTips)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISTOPTABUNLOCK_OFFSET))(this, index, showTips);
		}

		::System::Boolean IsQuestLock(::Class_2_208CC9941471731A_1167* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1167*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISQUESTLOCK_OFFSET))(this, config);
		}

		::System::Void RefreshLeftTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHLEFTTABS_OFFSET))(this);
		}

		::System::Void RefreshPopup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHPOPUP_OFFSET))(this);
		}

		::System::Void OnClickTopTab(::System::Boolean unlock, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKTOPTAB_OFFSET))(this, unlock, index);
		}

		::System::Void OnClickLeftTab(::System::Int32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKLEFTTAB_OFFSET))(this, levelID);
		}

		::System::Void OnStartBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONSTARTBTNCLICK_OFFSET))(this);
		}

		::System::Boolean _RefreshReward_b__22_0(::Class_2_208CC9941471731A_1167* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1167*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHREWARD_B__22_0_OFFSET))(this, x);
		}

		::System::Void _CheckTutorialProgress_b__23_0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CHECKTUTORIALPROGRESS_B__23_0_OFFSET))(this, message);
		}

		::System::Boolean _InitTopTabBtns_b__24_0(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__INITTOPTABBTNS_B__24_0_OFFSET))(this, idx);
		}

		::System::Boolean _RefreshLeftTabs_b__27_0(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHLEFTTABS_B__27_0_OFFSET))(this, idx);
		}

		::System::Boolean _OnStartBtnClick_b__31_0(::Class_2_208CC9941471731A_1167* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1167*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__ONSTARTBTNCLICK_B__31_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
