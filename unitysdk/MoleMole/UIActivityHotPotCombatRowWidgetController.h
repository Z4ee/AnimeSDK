#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_79AE422BA06F6D26_92;
namespace MoleMole { class UIActivityHotPotCombatRowWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_BINDBUTTON_OFFSET UNITYSDK_OFFSET(0x163304F0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_GETTARGETQUESETID_OFFSET UNITYSDK_OFFSET(0x16330F90)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1632F940)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1632FA50)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1632F9D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1632F870)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1632F8D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_OPENMAP_OFFSET UNITYSDK_OFFSET(0x16331250)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x16330100)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCKINFO_OFFSET UNITYSDK_OFFSET(0x16330EE0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0x16330830)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHQUESTINFO_OFFSET UNITYSDK_OFFSET(0x163309A0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1632FB40)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER_STARTLEVEL_OFFSET UNITYSDK_OFFSET(0x163313A0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16331550)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_0_OFFSET UNITYSDK_OFFSET(0x163315B0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER__STARTLEVEL_B__15_1_OFFSET UNITYSDK_OFFSET(0x163315C0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x163315D0)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16331660)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16331700)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16331790)
#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16331820)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatRowWidgetController_TypeDefinitionIndex = 44760;

	class UIActivityHotPotCombatRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_92* _view; // 0x2B8
		::System::Boolean isSending; // 0x2C0
		::System::Int32 hotpotLevelID; // 0x2C4

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
