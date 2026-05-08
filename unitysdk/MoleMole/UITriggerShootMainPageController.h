#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UITriggerShootMainPageController_CrosshairPiece.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_381D780505B409F3;
class Class_2_79AE422BA06F6D26_180;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UITriggerShootScoreWidgetController; }
namespace MoleMole { class UITriggerShootSkillButtonReloadChildWindowController; }
namespace MoleMole { class UITriggerShootSkillButtonShootChildWindowController; }
namespace MoleMole { class UITriggerShootSkillButtonZoomChildWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ADDREDAURAEFFECT_OFFSET UNITYSDK_OFFSET(0x14C3DDB0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_COUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x14C3D560)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_CREATEAVATARSKILLBTN_OFFSET UNITYSDK_OFFSET(0x14C39750)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ENTERUISTORYMODE_OFFSET UNITYSDK_OFFSET(0x14C3D740)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_EXITUISTORYMODE_OFFSET UNITYSDK_OFFSET(0x14C3D7E0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GETBONUSTIME_OFFSET UNITYSDK_OFFSET(0x14C3DC60)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14C39160)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_IMPORTANTPUSHMESSAGECTRL_OFFSET UNITYSDK_OFFSET(0x14C39180)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x14C39170)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x14C39150)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C39140)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ISBLENDINGTIMETOSCORE_OFFSET UNITYSDK_OFFSET(0x14C3CD90)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14C3B5B0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONAMMOCHANGE_OFFSET UNITYSDK_OFFSET(0x14C3CAD0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x14C3C050)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONCOMBOCHANGE_OFFSET UNITYSDK_OFFSET(0x14C3CDE0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C39190)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONEXITTPSMODE_OFFSET UNITYSDK_OFFSET(0x14C3D2A0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONFREESHOOTTIME_OFFSET UNITYSDK_OFFSET(0x14C3C7F0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C3A320)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0x14C3C9A0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C3BA40)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x14C3C120)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x14C3BD20)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONMAGAZINESIZECHANGE_OFFSET UNITYSDK_OFFSET(0x14C3D210)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONPAUSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x14C3BAE0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSCORECHANGE_OFFSET UNITYSDK_OFFSET(0x14C3CBE0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSHOWSCOREPOPUP_OFFSET UNITYSDK_OFFSET(0x14C3C2B0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C39A20)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C3B9C0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C39220)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONWAVEEND_OFFSET UNITYSDK_OFFSET(0x14C3DAD0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONWAVESTART_OFFSET UNITYSDK_OFFSET(0x14C3D880)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONZOOMIN_OFFSET UNITYSDK_OFFSET(0x14C3D2F0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONZOOMOUT_OFFSET UNITYSDK_OFFSET(0x14C3D390)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_PREPAREGAMESTART_OFFSET UNITYSDK_OFFSET(0x14C3D5B0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SETRANK_OFFSET UNITYSDK_OFFSET(0x14C3A050)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14C3B930)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SHOWMONSTERWAVEFAIRY_OFFSET UNITYSDK_OFFSET(0x14C3D950)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x14C3D430)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_STARTTIMETOSCOREBLEND_OFFSET UNITYSDK_OFFSET(0x14C3DB30)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_TRIGGERLEVELGAMEREALSTART_OFFSET UNITYSDK_OFFSET(0x14C3A940)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATETIMELEFTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x14C3B000)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATETIMETOSCOREBLEND_OFFSET UNITYSDK_OFFSET(0x14C3AA00)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C3A3F0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_WAITCOROUTINE_OFFSET UNITYSDK_OFFSET(0x14C3D170)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C3DF50)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER__ONUIINIT_B__42_0_OFFSET UNITYSDK_OFFSET(0x14C3E040)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C3E050)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x14C3E0E0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C3E170)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x14C3E1A0)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C3E230)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C3E240)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C3E250)
#define MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14C3E260)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootMainPageController_TypeDefinitionIndex = 57989;

	class UITriggerShootMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* setupTag; // 0x0
		// static const ::System::Int32 waveTipsId = 0x5F6851E; // 0x0
		// static const ::System::String* startTipsAnimation; // 0x0
		::Class_2_79AE422BA06F6D26_180* _view; // 0x310
		::MoleMole::UITriggerShootSkillButtonShootChildWindowController* _shootBtnCtrl; // 0x318
		::MoleMole::UITriggerShootSkillButtonShootChildWindowController* _leftShootBtnCtrl; // 0x320
		::MoleMole::UITriggerShootSkillButtonReloadChildWindowController* _reloadBtnCtrl; // 0x328
		::MoleMole::UITriggerShootSkillButtonZoomChildWindowController* _zoomBtnCtrl; // 0x330
		::Class_1_381D780505B409F3* _pushMessageTipCtrl; // 0x338
		::MoleMole::UIGeneralNewsBubbleWidgetController* _bubbleWidgetController; // 0x340
		::System::Boolean _hasRedAuraEffect; // 0x348
		::UnityEngine::Vector2 _curFrameAxisValue; // 0x34C
		::UnityEngine::Vector2 _curFrameRawAxisValue; // 0x354
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x35C
		::System::Boolean _isRotating; // 0x360
		::System::Boolean playingFreeShoot; // 0x361
		::System::Single playFreeShootLeftTime; // 0x364
		::Il2CppArray<::MoleMole::UITriggerShootMainPageController_CrosshairPiece>* _crosshairPieces; // 0x368
		::Il2CppArray<::UnityEngine::Transform*>* _comboRankTips; // 0x370
		::System::Boolean timeCountDownStarted; // 0x378
		::System::Single lastDisplayLeftTime; // 0x37C
		::System::Single leftTime; // 0x380
		::System::Single _displayBonusTime; // 0x384
		::System::Int32 _currentRealScore; // 0x388
		::System::Int32 _displayScore; // 0x38C
		::System::Boolean waitingStart; // 0x390
		::System::Single waitingStartTime; // 0x394
		::System::Int32 _currentRank; // 0x398
		::System::Int32 _currentComboRank; // 0x39C
		::System::Boolean isStoryMode; // 0x3A0
		::System::Collections::Generic::List_1<::MoleMole::UITriggerShootScoreWidgetController*>* _scoreWidgetList; // 0x3A8
		::System::Collections::Generic::Queue_1<::MoleMole::UITriggerShootScoreWidgetController*>* _scoreWidgetRecyclePool; // 0x3B0
		::System::Single _blendTime; // 0x3B8
		::System::Single _blendDuration; // 0x3BC
		::System::Single _blendStartTime; // 0x3C0
		::System::Single _blendStartScore; // 0x3C4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_92EDBC2AD8437DA6 get_UICursorHideState()
		{
			return ((::Enum_3_92EDBC2AD8437DA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::Class_1_381D780505B409F3* get_ImportantPushMessageCtrl()
		{
			return ((::Class_1_381D780505B409F3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GET_IMPORTANTPUSHMESSAGECTRL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean OnLogicInLevelCameraMove(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET))(this, inputAction);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CreateAvatarSkillBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_CREATEAVATARSKILLBTN_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnPauseBtnClicked(::MoleMole::ESystemSettingType systemSettingType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONPAUSEBTNCLICKED_OFFSET))(this, systemSettingType);
		}

		::System::Void OnShowScorePopup(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSHOWSCOREPOPUP_OFFSET))(this, arg);
		}

		::System::Void OnFreeShootTime(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONFREESHOOTTIME_OFFSET))(this, arg);
		}

		::System::Void OnHitTarget(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONHITTARGET_OFFSET))(this, arg);
		}

		::System::Void OnAmmoChange(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONAMMOCHANGE_OFFSET))(this, arg);
		}

		::System::Void OnScoreChange(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONSCORECHANGE_OFFSET))(this, arg);
		}

		::System::Void OnComboChange(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONCOMBOCHANGE_OFFSET))(this, arg);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitCoroutine(::System::Single length, ::System::Action* callback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_WAITCOROUTINE_OFFSET))(this, length, callback);
		}

		::System::Void SetRank(::System::Int32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SETRANK_OFFSET))(this, rank);
		}

		::System::Void OnMagazineSizeChange(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONMAGAZINESIZECHANGE_OFFSET))(this, arg);
		}

		::System::Void OnExitTPSMode(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONEXITTPSMODE_OFFSET))(this, arg);
		}

		::System::Void OnZoomIn(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONZOOMIN_OFFSET))(this, arg);
		}

		::System::Void OnZoomOut(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONZOOMOUT_OFFSET))(this, arg);
		}

		::System::Void StartCountDown(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_STARTCOUNTDOWN_OFFSET))(this, arg);
		}

		::System::Void CountDownEnd(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_COUNTDOWNEND_OFFSET))(this, arg);
		}

		::System::Void PrePareGameStart(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_PREPAREGAMESTART_OFFSET))(this, arg);
		}

		::System::Void TriggerLevelGameRealStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_TRIGGERLEVELGAMEREALSTART_OFFSET))(this);
		}

		::System::Void EnterUIStoryMode(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ENTERUISTORYMODE_OFFSET))(this, arg);
		}

		::System::Void ExitUIStoryMode(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_EXITUISTORYMODE_OFFSET))(this, arg);
		}

		::System::Void OnWaveStart(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONWAVESTART_OFFSET))(this, arg);
		}

		::System::Void OnWaveEnd(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ONWAVEEND_OFFSET))(this, arg);
		}

		::System::Void ShowMonsterWaveFairy(::System::String* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_SHOWMONSTERWAVEFAIRY_OFFSET))(this, param);
		}

		::System::Single GetBonusTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_GETBONUSTIME_OFFSET))(this);
		}

		::System::Void StartTimeToScoreBlend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_STARTTIMETOSCOREBLEND_OFFSET))(this);
		}

		::System::Boolean IsBlendingTimeToScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ISBLENDINGTIMETOSCORE_OFFSET))(this);
		}

		::System::Void UpdateTimeToScoreBlend(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATETIMETOSCOREBLEND_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateTimeLeftCountDown(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_UPDATETIMELEFTCOUNTDOWN_OFFSET))(this, deltaTime);
		}

		::System::Void AddRedAuraEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER_ADDREDAURAEFFECT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER__ONUIINIT_B__42_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTMAINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
