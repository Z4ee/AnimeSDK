#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_199;
namespace MoleMole { class UIActivityHotPotCombatRowWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x18C565D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_GETTARGETQUESETID_OFFSET UNITYSDK_OFFSET(0x18C57110)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C55920)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18C55A30)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C559B0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C55850)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C558B0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x18C573D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x18C56100)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCKINFO_OFFSET UNITYSDK_OFFSET(0x18C57030)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x18C56910)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHQUESTINFO_OFFSET UNITYSDK_OFFSET(0x18C56A80)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18C55B20)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x18C57510)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C576C0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_0_OFFSET UNITYSDK_OFFSET(0x18C57720)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_1_OFFSET UNITYSDK_OFFSET(0x18C57730)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C57740)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18C577D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C57870)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C57900)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C57990)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatRowWidgetController_TypeDefinitionIndex = 81847;

	class UIActivityHotPotCombatRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_199* _view; // 0x2C0
		::System::Boolean isSending; // 0x2C8
		::System::Int32 hotpotLevelID; // 0x2CC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void RefreshInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, context);
		}

		::System::Void BindButton(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_BINDBUTTON_OFFSET))(this, context);
		}

		::System::Void RefreshLock(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCK_OFFSET))(this, context);
		}

		::System::Void RefreshLockInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCKINFO_OFFSET))(this, context);
		}

		::System::Void RefreshQuestInfo(::MoleMole::UIActivityHotPotCombatRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityHotPotCombatRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHQUESTINFO_OFFSET))(this, context);
		}

		::System::Void OpenMap(::System::Int32 specialQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_OPENMAP_OFFSET))(this, specialQuest);
		}

		::System::Int32 GetTargetQuesetID(::System::Int32 specialQuest)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_GETTARGETQUESETID_OFFSET))(this, specialQuest);
		}

		::System::Void StartLevel(::System::Int32 levelid, ::System::Int32 generalLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_STARTLEVEL_OFFSET))(this, levelid, generalLevelID);
		}

		::System::Void _StartLevel_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_0_OFFSET))(this);
		}

		::System::Void _StartLevel_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
