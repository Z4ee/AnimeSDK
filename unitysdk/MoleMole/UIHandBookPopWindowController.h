#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_1EA8435E138F2E03;
class Class_2_C7387D40D4120A48_11;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }
namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET UNITYSDK_OFFSET(0x168874B0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETTACTICS_OFFSET UNITYSDK_OFFSET(0x16886970)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x16883C10)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16883C20)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_INITTACTICSNODE_OFFSET UNITYSDK_OFFSET(0x16885410)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16886490)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONREQUIRECLOSEHANDBOOK_OFFSET UNITYSDK_OFFSET(0x168869C0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16885870)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONTACTICSNODE_OFFSET UNITYSDK_OFFSET(0x16887710)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16886520)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16883C30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168859D0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_OPENREWARDTAB_OFFSET UNITYSDK_OFFSET(0x16885FC0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x16884C80)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETREWARDINPUTKEYHINT_OFFSET UNITYSDK_OFFSET(0x16886880)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16886910)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x16886E00)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16887C30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_0_OFFSET UNITYSDK_OFFSET(0x16887CE0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_1_OFFSET UNITYSDK_OFFSET(0x16887CF0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_2_OFFSET UNITYSDK_OFFSET(0x16887D00)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_3_OFFSET UNITYSDK_OFFSET(0x16887D10)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_4_OFFSET UNITYSDK_OFFSET(0x16887D20)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16887D30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16887DC0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16887DD0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16887DE0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16887DF0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16887E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopWindowController_TypeDefinitionIndex = 62989;

	class UIHandBookPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 HB_NORMAL_NEWBIE_ID = 0x41; // 0x0
		// static const ::System::Int32 HB_NORMAL_NEWBIE_CONSOLE_ID = 0x429; // 0x0
		// static const ::System::Int32 HB_NORMAL_NEWBIE_PC_ID = 0x811; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_ID = 0x91; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_CONSOLE_ID = 0x479; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_PC_ID = 0x861; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_ID = 0x92; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_CONSOLE_ID = 0x47A; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_PC_ID = 0x862; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_ID = 0x97; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_CONSOLE_ID = 0x47F; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_PC_ID = 0x867; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_ID = 0xE0; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_CONSOLE_ID = 0x4C8; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_PC_ID = 0x8B0; // 0x0
		// static const ::System::Int32 AntiqueNewbieId = 0x11C; // 0x0
		// static const ::System::Int32 AntiqueNewbieConsoleId = 0x504; // 0x0
		// static const ::System::Int32 AntiqueNewbiePcId = 0x8EC; // 0x0
		::Class_2_C7387D40D4120A48_11* _view; // 0x310
		::System::Collections::Generic::HashSet_1<::System::Int32>* _viewedTabs; // 0x318
		::Class_1_1EA8435E138F2E03* _tacticsNode; // 0x320
		::MoleMole::UIGeneralPopUpHintWidgetController* popCtrl; // 0x328
		::MoleMole::UIGeneralNewHintWidgetController* hintCtrl; // 0x330
		::MoleMole::UIHandBookManualWidgetController* _normalWidget; // 0x338
		::MoleMole::UIHandBookManualWidgetController* _hardWidget; // 0x340
		::MoleMole::UIDailyQuestHandBookWidgetController* _dailyWidget; // 0x348
		::MoleMole::UIHandBookTacticsWidgetController* _tacticsWidget; // 0x350
		::MoleMole::UIHandBookPrimerWidgetController* _primerWidget; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _tabs; // 0x360
		::System::Int32 prevIdx; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetRewardInputKeyHint(::System::Boolean isHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETREWARDINPUTKEYHINT_OFFSET))(this, isHint);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::MoleMole::UIHandBookTacticsWidgetController* GetTactics()
		{
			return ((::MoleMole::UIHandBookTacticsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETTACTICS_OFFSET))(this);
		}

		::System::Void InitTacticsNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_INITTACTICSNODE_OFFSET))(this);
		}

		::System::Void OnRequireCloseHandBook(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONREQUIRECLOSEHANDBOOK_OFFSET))(this, eventArgs);
		}

		::System::Void ShowTab(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET))(this, idx);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET))(this);
		}

		::System::Void OpenRewardTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_OPENREWARDTAB_OFFSET))(this);
		}

		::System::Void RefreshLock(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHLOCK_OFFSET))(this, _);
		}

		::System::Void OnTacticsNode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONTACTICSNODE_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
