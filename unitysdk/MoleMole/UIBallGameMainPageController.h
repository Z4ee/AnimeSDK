#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_D9ECFDE81FE491A6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_79AE422BA06F6D26_282;
class Class_2_CBA88C3064AB66D1;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGameFillWidgetController; }
namespace MoleMole { class UIBallGameMainPageController_BallPitInitGameContext; }
namespace MoleMole { class UIBallGameSkillButtonSwitchChildWindowController; }
namespace MoleMole { class UIBallGameToolbarBOSSWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1EBDA1B0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSCREATE_OFFSET UNITYSDK_OFFSET(0x1EBDB600)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBDBAE0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITELITECREATE_OFFSET UNITYSDK_OFFSET(0x1EBDA150)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITINLEVELTRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x1EBDBE00)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITITEMCREATE_OFFSET UNITYSDK_OFFSET(0x1EBDA0F0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELFINISH_OFFSET UNITYSDK_OFFSET(0x1EBDBB30)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELRESTART_OFFSET UNITYSDK_OFFSET(0x1EBDB800)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMAINPAGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1EBDC170)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0x1EBDA0A0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEINIT_OFFSET UNITYSDK_OFFSET(0x1EBDBD60)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBDBB90)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWORLDCREATE_OFFSET UNITYSDK_OFFSET(0x1EBDAB70)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EBDA1C0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONLEVELSTART_OFFSET UNITYSDK_OFFSET(0x1EBD9C20)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONNEWBIEEND_OFFSET UNITYSDK_OFFSET(0x1EBDC010)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EBDC370)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBDC810)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EBDA250)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EBDA690)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1EBD9D80)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_STARTTIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1EBDC1C0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDC970)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__ONBALLPITBOSSCREATE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1EBDC980)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__STARTTIMECOUNTDOWN_B__30_0_OFFSET UNITYSDK_OFFSET(0x1EBDCA10)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1EBDCAE0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBDCB70)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1EBDCB80)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1EBDCB90)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController_TypeDefinitionIndex = 93361;

	class UIBallGameMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single CountDownInterval; // 0x0
		// static const ::System::Single GoDisplayDuration; // 0x0
		::Class_2_79AE422BA06F6D26_282* _view; // 0x318
		::Class_3_6F28FFD006F2B451* world; // 0x320
		::MoleMole::UIBallGameMainPageController_BallPitInitGameContext* gameContext; // 0x328
		::MoleMole::UIBallGameToolbarBOSSWidgetController* bossWidget; // 0x330
		::Class_2_CBA88C3064AB66D1* gameModel; // 0x338
		::System::Int32 LevelID; // 0x340
		::MoleMole::UIBallGameSkillButtonSwitchChildWindowController* blockBtn; // 0x348
		::MoleMole::UIBallGameFillWidgetController* waveController; // 0x350
		::System::Nullable_1<::Struct_2_D9ECFDE81FE491A6> initWave; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnLevelStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONLEVELSTART_OFFSET))(this);
		}

		::System::Void OnBallPitMonsterCreate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMONSTERCREATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitItemCreate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITITEMCREATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitEliteCreate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITELITECREATE_OFFSET))(this, args);
		}

		::System::Void OpenTutorial(::System::Int32 popID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_OPENTUTORIAL_OFFSET))(this, popID);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnBallPitWorldCreate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWORLDCREATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitBossCreate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSCREATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitLevelRestart(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELRESTART_OFFSET))(this, args);
		}

		::System::Void OnBallPitBossDestroy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSDESTROY_OFFSET))(this, args);
		}

		::System::Void OnBallPitLevelFinish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELFINISH_OFFSET))(this, args);
		}

		::System::Void OnBallPitWaveUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEUPDATE_OFFSET))(this, args);
		}

		::System::Void OnBallPitWaveInit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEINIT_OFFSET))(this, args);
		}

		::System::Void OnBallPitInLevelTriggerNewbie(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITINLEVELTRIGGERNEWBIE_OFFSET))(this, args);
		}

		::System::Void OnNewbieEnd(::System::Int32 lastNewbieID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONNEWBIEEND_OFFSET))(this, lastNewbieID);
		}

		::System::Void OnBallPitMainPageCountDown(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMAINPAGECOUNTDOWN_OFFSET))(this, args);
		}

		::System::Void StartTimeCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_STARTTIMECOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnBallPitBossCreate_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__ONBALLPITBOSSCREATE_B__19_0_OFFSET))(this);
		}

		::System::Void _StartTimeCountDown_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__STARTTIMECOUNTDOWN_B__30_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
