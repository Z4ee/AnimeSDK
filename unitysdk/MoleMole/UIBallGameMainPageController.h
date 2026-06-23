#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_D9ECFDE81FE491A6.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_5C6F1F73B006644B;
class Class_2_79AE422BA06F6D26_262;
class Class_3_6F28FFD006F2B451;
namespace MoleMole { class UIBallGameFillWidgetController; }
namespace MoleMole { class UIBallGameMainPageController_BallPitInitGameContext; }
namespace MoleMole { class UIBallGameSkillButtonSwitchChildWindowController; }
namespace MoleMole { class UIBallGameToolbarBOSSWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1D78AAD0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSCREATE_OFFSET UNITYSDK_OFFSET(0x1D78BE50)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITBOSSDESTROY_OFFSET UNITYSDK_OFFSET(0x1D78C330)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITELITECREATE_OFFSET UNITYSDK_OFFSET(0x1D78AA70)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITINLEVELTRIGGERNEWBIE_OFFSET UNITYSDK_OFFSET(0x1D78C650)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITITEMCREATE_OFFSET UNITYSDK_OFFSET(0x1D78AA10)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELFINISH_OFFSET UNITYSDK_OFFSET(0x1D78C380)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITLEVELRESTART_OFFSET UNITYSDK_OFFSET(0x1D78C050)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMAINPAGECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D78C9B0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITMONSTERCREATE_OFFSET UNITYSDK_OFFSET(0x1D78A9C0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEINIT_OFFSET UNITYSDK_OFFSET(0x1D78C5B0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWAVEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D78C3E0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONBALLPITWORLDCREATE_OFFSET UNITYSDK_OFFSET(0x1D78B3D0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1D78AAE0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONLEVELSTART_OFFSET UNITYSDK_OFFSET(0x1D78A540)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONNEWBIEEND_OFFSET UNITYSDK_OFFSET(0x1D78C850)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1D78CBB0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1D78D030)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1D78AB70)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1D78AFB0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_OPENTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1D78A6A0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_STARTTIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D78CA00)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78D0A0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__ONBALLPITBOSSCREATE_B__19_0_OFFSET UNITYSDK_OFFSET(0x1D78D0B0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER__STARTTIMECOUNTDOWN_B__30_0_OFFSET UNITYSDK_OFFSET(0x1D78D140)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1D78D210)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1D78D2A0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1D78D2B0)
#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1D78D2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController_TypeDefinitionIndex = 89374;

	class UIBallGameMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Single CountDownInterval; // 0x0
		// static const ::System::Single GoDisplayDuration; // 0x0
		::Class_2_79AE422BA06F6D26_262* _view; // 0x318
		::Class_3_6F28FFD006F2B451* world; // 0x320
		::MoleMole::UIBallGameMainPageController_BallPitInitGameContext* gameContext; // 0x328
		::MoleMole::UIBallGameToolbarBOSSWidgetController* bossWidget; // 0x330
		::Class_2_5C6F1F73B006644B* gameModel; // 0x338
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
