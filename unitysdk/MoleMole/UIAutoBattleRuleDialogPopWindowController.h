#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabData.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_F0E4E2848B1D52CE;
class Class_2_E18273998F3C44B7;
namespace MoleMole { class UIABInLevelArcadetInfoWidgetController; }
namespace MoleMole { class UIABInLevelGoldInfoWidgetController; }
namespace MoleMole { class UIABInLevelHPInfoWidgetController; }
namespace MoleMole { class UIABInLevelRankInfoWidgetController; }
namespace MoleMole { class UIABInfoContext; }
namespace MoleMole { class UIAutoBattleCollectionTabBtnRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_CREATETABCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A6295D0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A628D20)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0x1A628E80)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A62A330)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0x1A629730)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A62A3C0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A628D30)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A62A0E0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_SETUPTABS_OFFSET UNITYSDK_OFFSET(0x1A629190)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A62A430)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__ONUIOPEN_B__19_0_OFFSET UNITYSDK_OFFSET(0x1A62A510)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A62A520)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A62A5B0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A62A5C0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A62A5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController_TypeDefinitionIndex = 73378;

	class UIAutoBattleRuleDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E18273998F3C44B7* _view; // 0x318
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData>* _typeTabs; // 0x328
		::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType _currentTabType; // 0x330
		::MoleMole::UIABInLevelGoldInfoWidgetController* goldWidget; // 0x338
		::MoleMole::UIABInLevelRankInfoWidgetController* randWidget; // 0x340
		::MoleMole::UIABInLevelHPInfoWidgetController* hpWidget; // 0x348
		::MoleMole::UIABInLevelArcadetInfoWidgetController* arcadeWidget; // 0x350
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType, ::MoleMole::UIWidgetController*>* widgetDict; // 0x358
		::MoleMole::UIABInfoContext* context; // 0x360
		::System::Boolean _allowShowPlatform; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void SetupTabs(::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_SETUPTABS_OFFSET))(this, tabIndex);
		}

		::System::Void OnTabSelected(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONTABSELECTED_OFFSET))(this, type);
		}

		::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController* CreateTabController(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData data)
		{
			return ((::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController*(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_CREATETABCONTROLLER_OFFSET))(this, data);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__ONUIOPEN_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
