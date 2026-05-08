#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_76A758F872DFBC83.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UISummerEventMainPageController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_50957C778109E4D2;
class Class_1_B3309433BD404061;
class Class_2_60638234271CCDB8_109;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UISummerMissionTipsWidgetController; }
namespace MoleMole { class UISummerSurfLeftBarChildWindowController; }
namespace MoleMole { class UISummerSurfRightBarChildWindowController; }
namespace MoleMole { class UISurfEquipSkillChildWindowController; }
namespace MoleMole { class UISurfSlowDownChildWindowController; }
namespace MoleMole { class UISurfSpeedUpChildWindowController; }
namespace MoleMole { class UISurfTurnLeftChildWindowController; }
namespace MoleMole { class UISurfTurnRightChildWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CLOSECOUNTUPTIMER_OFFSET UNITYSDK_OFFSET(0x14C24270)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CREATENAVMAPCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14C23110)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GETMETALPATH_OFFSET UNITYSDK_OFFSET(0x14C22160)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_CAMERADELTA_OFFSET UNITYSDK_OFFSET(0x14C21C00)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_DRIFT_OFFSET UNITYSDK_OFFSET(0x14C21A10)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_MOVE_OFFSET UNITYSDK_OFFSET(0x14C21B70)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14C21980)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SLOWDOWN_OFFSET UNITYSDK_OFFSET(0x14C21A00)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0x14C219A0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x14C21970)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C21960)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C228F0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x14C23E30)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C23910)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x14C23B40)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONOPERATECOUNTTIMERSTATE_OFFSET UNITYSDK_OFFSET(0x14C23F50)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET UNITYSDK_OFFSET(0x14C233E0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0x14C23EC0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C23580)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C22980)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_OPENCOUNTUPTIMERWIDGET_OFFSET UNITYSDK_OFFSET(0x14C242E0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x14C23DC0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0x14C21AB0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET UNITYSDK_OFFSET(0x14C21D00)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYSTARTTIP_OFFSET UNITYSDK_OFFSET(0x14C21C10)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ENABLESKILL_OFFSET UNITYSDK_OFFSET(0x14C21B10)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0x14C21990)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_SKILLRATIO_OFFSET UNITYSDK_OFFSET(0x14C21A40)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSIONTIPIFREFRESHMINIMALTIMECOST_OFFSET UNITYSDK_OFFSET(0x14C22450)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSION_OFFSET UNITYSDK_OFFSET(0x14C21DB0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0x14C23810)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C23650)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C244D0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__PLAYSTARTTIP_G__STARTGAME_42_0_OFFSET UNITYSDK_OFFSET(0x14C24530)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C245F0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C24680)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C246B0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C246C0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventSurfMainPageController_TypeDefinitionIndex = 58605;

	class UISummerEventSurfMainPageController : public ::MoleMole::UISummerEventMainPageController
	{
	public:
		::Class_2_60638234271CCDB8_109* _view; // 0x320
		::MoleMole::UISurfSpeedUpChildWindowController* _speedUp; // 0x328
		::MoleMole::UISurfSlowDownChildWindowController* _slowDown; // 0x330
		::MoleMole::UISurfEquipSkillChildWindowController* _equipSkill; // 0x338
		::MoleMole::UISurfTurnLeftChildWindowController* _turnLeft; // 0x340
		::MoleMole::UISurfTurnRightChildWindowController* _turnRight; // 0x348
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* _countUpTimer; // 0x350
		::Class_1_50957C778109E4D2* _navMap; // 0x358
		::MoleMole::UISummerSurfLeftBarChildWindowController* _leftBar; // 0x360
		::MoleMole::UISummerSurfRightBarChildWindowController* _rightBar; // 0x368
		::Enum_3_92EDBC2AD8437DA6 _cursorHideState; // 0x370
		::MoleMole::UISummerMissionTipsWidgetController* _missionTips; // 0x378
		::Foundation::Coroutine::CoroutineHandle _missionCoroutine; // 0x380
		::UnityEngine::Vector2 _curFrameAxisValue; // 0x384
		::UnityEngine::Vector2 _curFromMoveAxisValue; // 0x38C
		::UnityEngine::Vector2 _curFrameRawAxisValue; // 0x394
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x39C
		::Class_1_B3309433BD404061* _OngoingController_k__BackingField; // 0x3A0
		::System::Boolean _isRotating; // 0x3A8
		::System::Boolean _gameStart; // 0x3A9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_92EDBC2AD8437DA6 get_UICursorHideState()
		{
			return ((::Enum_3_92EDBC2AD8437DA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::Class_1_B3309433BD404061* get_OngoingController()
		{
			return ((::Class_1_B3309433BD404061*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET))(this);
		}

		::System::Void set_OngoingController(::Class_1_B3309433BD404061* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3309433BD404061*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_SpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SPEEDUP_OFFSET))(this);
		}

		::System::Boolean get_SlowDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SLOWDOWN_OFFSET))(this);
		}

		::System::Boolean get_Drift()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_DRIFT_OFFSET))(this);
		}

		::System::Void set_SkillRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_SKILLRATIO_OFFSET))(this, value);
		}

		::System::Void PlayEquipEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYEQUIPEFFECT_OFFSET))(this);
		}

		::System::Void set_EnableSkill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ENABLESKILL_OFFSET))(this, value);
		}

		::System::Single get_Move()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_MOVE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_CAMERADELTA_OFFSET))(this);
		}

		::System::Void PlayStartTip(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYSTARTTIP_OFFSET))(this, callback);
		}

		::System::Void PlayFinishTip(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET))(this, callback);
		}

		::System::Void ShowMission(::System::Int32 value, ::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSION_OFFSET))(this, value, rank);
		}

		::System::Void ShowMissionTipIfRefreshMinimalTimeCost(::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSIONTIPIFREFRESHMINIMALTIMECOST_OFFSET))(this, totalTime);
		}

		static ::System::String* GetMetalPath(::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::String*(*)(::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GETMETALPATH_OFFSET))(rank);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnPerformNotify(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET))(this, args);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_50957C778109E4D2* CreateNavMapController()
		{
			return ((::Class_1_50957C778109E4D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CREATENAVMAPCONTROLLER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATESPEED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean OnLogicInLevelCameraMove(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET))(this, inputAction);
		}

		::System::Void PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONEXITGAME_OFFSET))(this);
		}

		::System::Void OnRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET))(this);
		}

		::System::Void OnOperateCountTimerState(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONOPERATECOUNTTIMERSTATE_OFFSET))(this, args);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenCountUpTimerWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_OPENCOUNTUPTIMERWIDGET_OFFSET))(this);
		}

		::System::Void CloseCountUpTimer(::MoleMole::UIGeneralNewsBubbleRowWidgetController*& countUpTimer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CLOSECOUNTUPTIMER_OFFSET))(this, countUpTimer);
		}

		::System::Void _PlayStartTip_g__StartGame_42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__PLAYSTARTTIP_G__STARTGAME_42_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
