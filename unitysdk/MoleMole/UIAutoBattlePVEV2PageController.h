#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_11;
class Class_2_208CC9941471731A_341;
class Class_2_7B15B3118FE590CD_28;
class Class_2_C3BEF2A3EE58BD43;
namespace MoleMole { class UIABLineupCampItemWidgetController; }
namespace MoleMole { class UIAutoBattlePveTabBtnRowWidgetController; }
namespace MoleMole { class UIAutoBattlePveTopTabBtnRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_CHECKTUTORIALPROGRESS_OFFSET UNITYSDK_OFFSET(0x12F44750)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_CUREXTERNALLEVELCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x12F42AA0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x12F429E0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12F429D0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITDATA_OFFSET UNITYSDK_OFFSET(0x12F42E50)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_INITTOPTABBTNS_OFFSET UNITYSDK_OFFSET(0x12F44960)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISQUESTLOCK_OFFSET UNITYSDK_OFFSET(0x12F473F0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISTOPTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x12F46F50)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKLEFTTAB_OFFSET UNITYSDK_OFFSET(0x12F47FD0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCLICKTOPTAB_OFFSET UNITYSDK_OFFSET(0x12F47EE0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F42B50)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONSTARTBTNCLICK_OFFSET UNITYSDK_OFFSET(0x12F481F0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F44D90)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F42BE0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F43A20)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHLEFTTABS_OFFSET UNITYSDK_OFFSET(0x12F47620)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHPOPUP_OFFSET UNITYSDK_OFFSET(0x12F45FE0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0x12F45A60)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x12F45430)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CHECKTUTORIALPROGRESS_B__23_0_OFFSET UNITYSDK_OFFSET(0x12F484D0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F48390)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__INITTOPTABBTNS_B__24_0_OFFSET UNITYSDK_OFFSET(0x12F48BC0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__ONSTARTBTNCLICK_B__31_0_OFFSET UNITYSDK_OFFSET(0x12F48E90)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHLEFTTABS_B__27_0_OFFSET UNITYSDK_OFFSET(0x12F48BD0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHREWARD_B__22_0_OFFSET UNITYSDK_OFFSET(0x12F484A0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F48EC0)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F48F10)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F48F20)
#define MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F48F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEV2PageController_TypeDefinitionIndex = 63408;

	class UIAutoBattlePVEV2PageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_7B15B3118FE590CD_28* _view; // 0x310
		::Class_2_C3BEF2A3EE58BD43* _model; // 0x318
		::System::Int32 _curTopIndex; // 0x320
		::System::Int32 _curLevelID; // 0x324
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_341*>*>* _dataDict; // 0x328
		::MoleMole::UIABLineupCampItemWidgetController* _campWidget; // 0x330
		::System::Collections::Generic::List_1<::System::Int32>* _keys; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattlePveTopTabBtnRowWidgetController*>* _topTabWidgets; // 0x340
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIAutoBattlePveTabBtnRowWidgetController*>* _leftTabWidgets; // 0x348

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

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_341*>* get_CurExternalLevelConfigList()
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_341*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_GET_CUREXTERNALLEVELCONFIGLIST_OFFSET))(this);
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

		::System::Boolean IsQuestLock(::Class_2_208CC9941471731A_341* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_341*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER_ISQUESTLOCK_OFFSET))(this, config);
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

		::System::Boolean _RefreshReward_b__22_0(::Class_2_208CC9941471731A_341* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_341*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHREWARD_B__22_0_OFFSET))(this, x);
		}

		::System::Void _CheckTutorialProgress_b__23_0(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__CHECKTUTORIALPROGRESS_B__23_0_OFFSET))(this, message);
		}

		::System::Boolean _InitTopTabBtns_b__24_0(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__INITTOPTABBTNS_B__24_0_OFFSET))(this, idx);
		}

		::System::Boolean _RefreshLeftTabs_b__27_0(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__REFRESHLEFTTABS_B__27_0_OFFSET))(this, idx);
		}

		::System::Boolean _OnStartBtnClick_b__31_0(::Class_2_208CC9941471731A_341* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_341*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEV2PAGECONTROLLER__ONSTARTBTNCLICK_B__31_0_OFFSET))(this, x);
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
