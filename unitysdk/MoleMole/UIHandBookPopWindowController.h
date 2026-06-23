#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIHandBookPopWindowController_EHandBookTab.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_1EA8435E138F2E03;
class Class_2_C7387D40D4120A48_11;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIHandBookConsumePanelWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }
namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET UNITYSDK_OFFSET(0x1846FA70)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETANIMSCROLLSFORTAB_OFFSET UNITYSDK_OFFSET(0x1846F0C0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETFIRSTINTERACTABLETAB_OFFSET UNITYSDK_OFFSET(0x1846DE80)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETTACTICS_OFFSET UNITYSDK_OFFSET(0x1846EBE0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1846BC30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1846BC40)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_INITTACTICSNODE_OFFSET UNITYSDK_OFFSET(0x1846D2B0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ISNEWBIERUNNINGANYPLATFORM_OFFSET UNITYSDK_OFFSET(0x1846FE50)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1846E670)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONREQUIRECLOSEHANDBOOK_OFFSET UNITYSDK_OFFSET(0x1846EC30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1846D710)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONTACTICSNODE_OFFSET UNITYSDK_OFFSET(0x1846FED0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1846E700)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1846BC50)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1846D870)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_OPENREWARDTAB_OFFSET UNITYSDK_OFFSET(0x1846DFB0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHCONSUMEPANELVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1846FC10)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x1846CB80)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETREWARDINPUTKEYHINT_OFFSET UNITYSDK_OFFSET(0x1846EAF0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1846EB80)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x1846F5E0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_TRYCLEANPREVTABNOTIFY_OFFSET UNITYSDK_OFFSET(0x1846E9A0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18470510)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x184703F0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_0_OFFSET UNITYSDK_OFFSET(0x18470720)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_1_OFFSET UNITYSDK_OFFSET(0x18470730)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_2_OFFSET UNITYSDK_OFFSET(0x18470740)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_3_OFFSET UNITYSDK_OFFSET(0x18470750)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_4_OFFSET UNITYSDK_OFFSET(0x18470760)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18470770)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18470800)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18470810)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18470820)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18470830)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x184708C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopWindowController_TypeDefinitionIndex = 53601;

	class UIHandBookPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::MoleMole::UIHandBookPopWindowController_EHandBookTab>** StaticGet_ConsumePanelVisibleTabs()
		{
			return (::System::Collections::Generic::HashSet_1<::MoleMole::UIHandBookPopWindowController_EHandBookTab>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookPopWindowController_TypeDefinitionIndex)->GetStaticField(0x48820);
		}
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
		// static const ::System::Int32 HB_RAB_NEWBIE_ID = 0x139; // 0x0
		// static const ::System::Int32 HB_RECORD_ID_PROXY = 0x7; // 0x0
		// static const ::System::Int32 HB_RECORD_ID_DAILY = 0x8; // 0x0
		::Class_2_C7387D40D4120A48_11* _view; // 0x318
		::System::Collections::Generic::HashSet_1<::System::Int32>* _viewedTabs; // 0x320
		::Class_1_1EA8435E138F2E03* _tacticsNode; // 0x328
		::MoleMole::UIGeneralPopUpHintWidgetController* _popCtrl; // 0x330
		::MoleMole::UIGeneralNewHintWidgetController* _hintCtrl; // 0x338
		::MoleMole::UIHandBookManualWidgetController* _normalWidget; // 0x340
		::MoleMole::UIHandBookManualWidgetController* _hardWidget; // 0x348
		::MoleMole::UIDailyQuestHandBookWidgetController* _dailyWidget; // 0x350
		::MoleMole::UIHandBookTacticsWidgetController* _tacticsWidget; // 0x358
		::MoleMole::UIHandBookPrimerWidgetController* _primerWidget; // 0x360
		::MoleMole::UIHandBookConsumePanelWidgetController* _consumePanelWidget; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _tabs; // 0x370
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::MonoUITableScrollV2*>*>* _tabAnimScrollCache; // 0x378
		::System::Int32 _prevIdx; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
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

		::Il2CppArray<::MonoUITableScrollV2*>* GetAnimScrollsForTab(::System::Int32 idx)
		{
			return ((::Il2CppArray<::MonoUITableScrollV2*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETANIMSCROLLSFORTAB_OFFSET))(this, idx);
		}

		::System::Void ShowTab(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET))(this, idx);
		}

		::System::Void TryCleanPrevTabNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_TRYCLEANPREVTABNOTIFY_OFFSET))(this);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET))(this);
		}

		static ::System::Boolean IsNewbieRunningAnyPlatform(::System::Int32 mobileId, ::System::Int32 consoleId, ::System::Int32 pcId)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ISNEWBIERUNNINGANYPLATFORM_OFFSET))(mobileId, consoleId, pcId);
		}

		::MoleMole::UIHandBookPopWindowController_EHandBookTab GetFirstInteractableTab(::MoleMole::UIHandBookPopWindowController_EHandBookTab preferred)
		{
			return ((::MoleMole::UIHandBookPopWindowController_EHandBookTab(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETFIRSTINTERACTABLETAB_OFFSET))(this, preferred);
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

		::System::Void RefreshConsumePanelVisibility(::MoleMole::UIHandBookPopWindowController_EHandBookTab tab)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHandBookPopWindowController_EHandBookTab))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHCONSUMEPANELVISIBILITY_OFFSET))(this, tab);
		}

		::System::Void _OnUIInit_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__29_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__29_4_OFFSET))(this);
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
