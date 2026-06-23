#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_39A9A0109BB4AB63.h"
#include "unitysdk/Enum_3_E2714210413A69CA.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/CinemaSingleBeatMapConfig_BeatMap_BeatItem.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UICinemaSinglePlayWidgetController_ComboShowState.h"
#include "unitysdk/MoleMole/UICinemaSinglePlayWidgetController_ComboStateEnum.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_627;
class Class_2_0E3D561C72111316;
class Class_2_3F802DF1B3FAD67A;
class Class_2_3F802DF1B3FAD67A_1;
class Class_2_3F802DF1B3FAD67A_2;
class Class_2_3F802DF1B3FAD67A_3;
class Class_2_3F802DF1B3FAD67A_4;
class Class_2_3F802DF1B3FAD67A_5;
class Class_2_51BFD8DFDA25B0B4;
class Class_2_7341BF3E408F4DA8;
class Class_2_7341BF3E408F4DA8_Class_2_32FA89503EEFC4EE;
class Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_1;
class Class_2_7341BF3E408F4DA8_Class_2_7205AB2C0A9DC1BA;
class Class_2_7341BF3E408F4DA8_Class_2_9CB8F5C48DA81A47;
namespace MoleMole { class UICinemaBubbleBaseContext; }
namespace MoleMole { class UICinemaFeverTipsWidgetController; }
namespace MoleMole { class UICinemaPlayBubble01RightWidgetController; }
namespace MoleMole { class UICinemaPlayBubble01WidgetController; }
namespace MoleMole { class UICinemaSingleBadBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleClearAllBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleMultiClickBubbleRightWidgetController; }
namespace MoleMole { class UICinemaSingleMultiClickBubbleWidgetController; }
namespace MoleMole { class UICinemaSingleSuperBubbleWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CHANGEFEVERUICOLOR_OFFSET UNITYSDK_OFFSET(0x14C19F80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CHECKLOCATIONMISSCLICKABLE_OFFSET UNITYSDK_OFFSET(0x14C18700)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTORYEFFECTENTITY_OFFSET UNITYSDK_OFFSET(0x14C10DC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTROYMATERIALS_OFFSET UNITYSDK_OFFSET(0x14C118D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DISPATCHGRAPHEVENT_OFFSET UNITYSDK_OFFSET(0x14C18640)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDFEVEREFFECT_OFFSET UNITYSDK_OFFSET(0x14C10890)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDSUPERBUBBLEEFFECT_OFFSET UNITYSDK_OFFSET(0x14C10CD0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENSUREINPUTACTIONISDOWN_OFFSET UNITYSDK_OFFSET(0x14C12D80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GENERATEBADBUBBLECONTEXT_OFFSET UNITYSDK_OFFSET(0x14C15D60)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GENERATEGOODBUBBLECONTEXT_OFFSET UNITYSDK_OFFSET(0x14C15980)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETCOMBOIMGBYINT_OFFSET UNITYSDK_OFFSET(0x14C19800)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETENTITYEFFECTBYTYPE_OFFSET UNITYSDK_OFFSET(0x14C11C20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETLOCATIONVIEWBYLOCATION_OFFSET UNITYSDK_OFFSET(0x14C16250)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETMULTICLICKBUBBLEWIDGETBYSIDE_OFFSET UNITYSDK_OFFSET(0x14C16DC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETNORMALBUBBLEWIDGETBYSIDE_OFFSET UNITYSDK_OFFSET(0x14C16470)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x14C140F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_ISTICKING_OFFSET UNITYSDK_OFFSET(0x14C10FC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_MAINCAM_OFFSET UNITYSDK_OFFSET(0x14C10F50)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HIDEFEVERUI_OFFSET UNITYSDK_OFFSET(0x14C19EE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITBACKGROUNDBTNGROUP_OFFSET UNITYSDK_OFFSET(0x14C125B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITSCREENEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x14C105A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITTUTORIALLIST_OFFSET UNITYSDK_OFFSET(0x14C126E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITUIMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x14C11040)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C12840)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C12970)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C128D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C12300)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C124A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PAUSEALLEVENT_OFFSET UNITYSDK_OFFSET(0x14C13240)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYCOMBOINCREASEANIM_OFFSET UNITYSDK_OFFSET(0x14C19290)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERSTARTEFFECT_OFFSET UNITYSDK_OFFSET(0x14C10800)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERWIDGETFADEANIM_OFFSET UNITYSDK_OFFSET(0x14C19CA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERWIDGETFEVERANIM_OFFSET UNITYSDK_OFFSET(0x14C19D60)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYSUPERBUBBLESTARTEFFECT_OFFSET UNITYSDK_OFFSET(0x14C10AC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYTIMEBARFEVERANIM_OFFSET UNITYSDK_OFFSET(0x14C19E20)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_REFRESHCOMBO_OFFSET UNITYSDK_OFFSET(0x14C19170)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETALLBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C14B10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETBUBBLEDIC_OFFSET UNITYSDK_OFFSET(0x14C15290)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETDATAWHENRESTART_OFFSET UNITYSDK_OFFSET(0x14C14140)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETFEVERAPPEARPARAMSWHENRESTART_OFFSET UNITYSDK_OFFSET(0x14C142D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETLOCATIONCLICKABLEDIC_OFFSET UNITYSDK_OFFSET(0x14C145B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETSOSETTING_OFFSET UNITYSDK_OFFSET(0x14C14460)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETTIMEBARUI_OFFSET UNITYSDK_OFFSET(0x14C158F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETTIMEUI_OFFSET UNITYSDK_OFFSET(0x14C14920)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETUI_OFFSET UNITYSDK_OFFSET(0x14C148D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESUMEALLEVENT_OFFSET UNITYSDK_OFFSET(0x14C13410)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SETNEWSCORE_OFFSET UNITYSDK_OFFSET(0x14C18D80)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SETTIMEPROGRESS_OFFSET UNITYSDK_OFFSET(0x14C13DE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x14C17180)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C170E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x14C17DE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C17D40)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCOMBOATLOCATION_OFFSET UNITYSDK_OFFSET(0x14C183D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCOMBOUI_INNER_OFFSET UNITYSDK_OFFSET(0x14C18440)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWENTEREFFECT_OFFSET UNITYSDK_OFFSET(0x14C11CB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVEREFFECT_OFFSET UNITYSDK_OFFSET(0x14C10980)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERTIPSDIALOG_OFFSET UNITYSDK_OFFSET(0x14C10730)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERUI_OFFSET UNITYSDK_OFFSET(0x14C19B50)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x14C16AE0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C16A30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x14C15F90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C15EF0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWPLAYEREFFECT_OFFSET UNITYSDK_OFFSET(0x14C11BA0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSCOREATLOCATION_OFFSET UNITYSDK_OFFSET(0x14C18270)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLEEFFECT_OFFSET UNITYSDK_OFFSET(0x14C10B90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_1_OFFSET UNITYSDK_OFFSET(0x14C17710)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_OFFSET UNITYSDK_OFFSET(0x14C17670)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEARUPDATE_OFFSET UNITYSDK_OFFSET(0x14C18A90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEAR_OFFSET UNITYSDK_OFFSET(0x14C19A10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERUPDATE_OFFSET UNITYSDK_OFFSET(0x14C189F0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHGOODBUBBLESOUNDSTATE_OFFSET UNITYSDK_OFFSET(0x14C15B30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHLOCATIONMISSCLICKABLE_OFFSET UNITYSDK_OFFSET(0x14C18850)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHUISHOW_OFFSET UNITYSDK_OFFSET(0x14C14740)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRIGGERAVATARANIMFINISH_OFFSET UNITYSDK_OFFSET(0x14C143E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRIGGERFEVEREND_OFFSET UNITYSDK_OFFSET(0x14C14350)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERAVATARANIMCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x14C1A0D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERLOGICEVENTWITHLOCATION_OFFSET UNITYSDK_OFFSET(0x14C12B90)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYUPDATETIMELINEMANAGER_OFFSET UNITYSDK_OFFSET(0x14C131A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEAVATARANIM_OFFSET UNITYSDK_OFFSET(0x14C136D0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEBUBBLEDICT_OFFSET UNITYSDK_OFFSET(0x14C16830)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEBUBBLES_OFFSET UNITYSDK_OFFSET(0x14C137B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOCOUNT_OFFSET UNITYSDK_OFFSET(0x14C19220)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x14C19370)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEEVENTANIM_OFFSET UNITYSDK_OFFSET(0x14C135E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEFEVERAPPEAR_OFFSET UNITYSDK_OFFSET(0x14C13D00)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEFEVER_OFFSET UNITYSDK_OFFSET(0x14C13C00)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x14C18BC0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x14C10FD0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATETIMEBAR_OFFSET UNITYSDK_OFFSET(0x14C13660)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14C12F30)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_WAITUNTILTIMECURSOR_OFFSET UNITYSDK_OFFSET(0x14C10E70)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CHANGEFEVERUICOLOR_B__123_0_OFFSET UNITYSDK_OFFSET(0x14C1A6B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CHANGEFEVERUICOLOR_B__123_1_OFFSET UNITYSDK_OFFSET(0x14C1A720)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1A160)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__HIDEFEVERUI_B__122_0_OFFSET UNITYSDK_OFFSET(0x14C1A6A0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_B__36_0_OFFSET UNITYSDK_OFFSET(0x14C1A5B0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__STARTFEVERAPPEAR_B__117_0_OFFSET UNITYSDK_OFFSET(0x14C1A680)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__STARTFEVERAPPEAR_B__117_1_OFFSET UNITYSDK_OFFSET(0x14C1A690)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C1A790)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14C1A7E0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C1A810)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C1A850)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C1A890)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController_TypeDefinitionIndex = 71493;

	class UICinemaSinglePlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Threading::CancellationTokenSource* m_originalSource; // 0x2C0
		::UnityEngine::Material* _currLevelMaterial; // 0x2C8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* materialDic; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::MoleMole::UICinemaSinglePlayWidgetController_ComboStateEnum, ::UnityEngine::Material*>* comboMaterialDic; // 0x2D8
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* handlers; // 0x2E0
		::MoleMole::UICinemaFeverTipsWidgetController* m_feverTipsDialog; // 0x2E8
		::System::Single m_curTimeCursor; // 0x2F0
		::System::Boolean m_isTicking; // 0x2F4
		::MoleMole::Battle::Entity* PlayerEffectEntity; // 0x2F8
		::MoleMole::Battle::Entity* EnterEffectEntity; // 0x300
		::Class_2_7341BF3E408F4DA8* _view; // 0x308
		::Class_2_0E3D561C72111316* _playController; // 0x310
		::Class_2_7341BF3E408F4DA8_Class_2_32FA89503EEFC4EE* _scoreWidgetView; // 0x318
		::Class_2_7341BF3E408F4DA8_Class_2_9CB8F5C48DA81A47* _bubbleWidgetView; // 0x320
		::Class_2_7341BF3E408F4DA8_Class_2_7205AB2C0A9DC1BA* _timeWidgetView; // 0x328
		::MoleMole::UICinemaSingleSuperBubbleWidgetController* _superBubble; // 0x330
		::MoleMole::UICinemaSinglePlayWidgetController_ComboShowState m_comboShowState; // 0x338
		::System::String* m_comboFadeout; // 0x340
		::System::String* m_comboFadein; // 0x348
		::System::String* animComboNumChange; // 0x350
		::System::String* animGetScoreFadein; // 0x358
		::System::String* comboImg; // 0x360
		::System::Int32 _currScore; // 0x368
		::Enum_3_E2714210413A69CA _currLevel; // 0x36C
		::System::Int32 _comboCount; // 0x370
		::System::Single _comboMultiplier; // 0x374
		::UnityEngine::Material* _comboMaterial; // 0x378
		::System::Boolean _isTimeUIInited; // 0x380
		::UnityEngine::RectTransform* timerFillProgressRect; // 0x388
		::System::Single currPassedTime; // 0x390
		::System::Single totalLevelTime; // 0x394
		::System::Single _maxTimerProgressValue; // 0x398
		::System::Boolean isInFeverAppear; // 0x39C
		::System::Single currFeverAppearPassedTime; // 0x3A0
		::System::Single totalFeverAppearTime; // 0x3A4
		::System::Single totalToFeverTime; // 0x3A8
		::System::Action* _onFeverStartWhenAppear; // 0x3B0
		::System::Action* _onFeverAppearEnd; // 0x3B8
		::System::Single currFeverPassedTime; // 0x3C0
		::System::Single totalFeverTime; // 0x3C4
		::System::String* feverStartEventStr; // 0x3C8
		::System::String* feverEndEventStr; // 0x3D0
		::System::Action* _onFeverEnd; // 0x3D8
		::System::Boolean isSwitchingPose; // 0x3E0
		::System::Single currAnimSwitchPassedTime; // 0x3E4
		::System::Single totalAnimSwitchTime; // 0x3E8
		::System::Action* _onPoseSwitchEnd; // 0x3F0
		::System::Collections::Generic::List_1<::MoleMole::UICinemaPlayBubble01WidgetController*>* normalBubbleList; // 0x3F8
		::System::Collections::Generic::List_1<::MoleMole::UICinemaPlayBubble01RightWidgetController*>* normalBubbleRightList; // 0x400
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleMultiClickBubbleWidgetController*>* multiClickBubbleList; // 0x408
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleMultiClickBubbleRightWidgetController*>* multiClickRightBubbleList; // 0x410
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleBadBubbleWidgetController*>* badBubbleList; // 0x418
		::System::Collections::Generic::List_1<::MoleMole::UICinemaSingleClearAllBubbleWidgetController*>* clearAllBubbleList; // 0x420
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_627*>* _displayBubbleDic; // 0x428
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _locationEmptyClickableDic; // 0x430
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_627*>* _toBeRemovedList; // 0x438
		::System::Single _protectTimeAfterBubbleDisappear; // 0x440
		::System::Single _protectTimeAfterClickMiss; // 0x444

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitScreenEffectParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITSCREENEFFECTPARAMS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayFeverStartEffect()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERSTARTEFFECT_OFFSET))(this);
		}

		::System::Void EndFeverEffect(::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDFEVEREFFECT_OFFSET))(this, isDestroyImmediate);
		}

		::System::Void ShowFeverEffect(::System::Boolean state, ::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVEREFFECT_OFFSET))(this, state, isDestroyImmediate);
		}

		::System::Void PlaySuperBubbleStartEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYSUPERBUBBLESTARTEFFECT_OFFSET))(this);
		}

		::System::Void EndSuperBubbleEffect(::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENDSUPERBUBBLEEFFECT_OFFSET))(this, isDestroyImmediate);
		}

		::System::Void ShowSuperBubbleEffect(::System::Boolean state, ::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLEEFFECT_OFFSET))(this, state, isDestroyImmediate);
		}

		::System::Void DestoryEffectEntity(::MoleMole::Battle::Entity* effectEntity, ::System::Boolean isDestroyImmediate)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTORYEFFECTENTITY_OFFSET))(this, effectEntity, isDestroyImmediate);
		}

		::Cysharp::Threading::Tasks::UniTask ShowFeverTipsDialog(::System::Boolean show, ::System::Single delayTime)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERTIPSDIALOG_OFFSET))(this, show, delayTime);
		}

		::Cysharp::Threading::Tasks::UniTask WaitUntilTimeCursor(::System::Single resumeTime, ::System::Threading::CancellationToken token, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_WAITUNTILTIMECURSOR_OFFSET))(this, resumeTime, token, timing);
		}

		::UnityEngine::Camera* get_MainCam()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_MAINCAM_OFFSET))(this);
		}

		::System::Boolean get_IsTicking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GET_ISTICKING_OFFSET))(this);
		}

		::System::Void UpdateScreenEffect(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCREENEFFECT_OFFSET))(this, deltaTime);
		}

		::System::Void InitUIMaterialParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITUIMATERIALPARAMS_OFFSET))(this);
		}

		::System::Void DestroyMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DESTROYMATERIALS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid ShowPlayerEffect(::Enum_3_39A9A0109BB4AB63 effectTypeEnum, ::System::Boolean isShow)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Enum_3_39A9A0109BB4AB63, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWPLAYEREFFECT_OFFSET))(this, effectTypeEnum, isShow);
		}

		::System::String* GetEntityEffectByType(::Enum_3_39A9A0109BB4AB63 effectTypeEnum)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_39A9A0109BB4AB63))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETENTITYEFFECTBYTYPE_OFFSET))(this, effectTypeEnum);
		}

		::System::Void ShowEnterEffect(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWENTEREFFECT_OFFSET))(this, isShow);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitTutorialList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITTUTORIALLIST_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean TryTriggerLogicEventWithLocation(::MoleMole::InputActionEvent inputAction, ::System::Int32 locationIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERLOGICEVENTWITHLOCATION_OFFSET))(this, inputAction, locationIdx);
		}

		::System::Boolean EnsureInputActionIsDown(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_ENSUREINPUTACTIONISDOWN_OFFSET))(this, inputAction);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean TryUpdateTimelineManager(::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYUPDATETIMELINEMANAGER_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateEventAnim(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEEVENTANIM_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateBubbles(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEBUBBLES_OFFSET))(this, deltaTime);
		}

		::System::Void PauseAllEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PAUSEALLEVENT_OFFSET))(this);
		}

		::System::Void ResumeAllEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESUMEALLEVENT_OFFSET))(this);
		}

		::System::Void UpdateTimeBar(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATETIMEBAR_OFFSET))(this, deltaTime);
		}

		::Class_2_7341BF3E408F4DA8* GetView()
		{
			return ((::Class_2_7341BF3E408F4DA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void ResetDataWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETDATAWHENRESTART_OFFSET))(this);
		}

		::System::Void ResetSOSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETSOSETTING_OFFSET))(this);
		}

		::System::Void SwitchUIShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHUISHOW_OFFSET))(this, isShow);
		}

		::System::Void ResetUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETUI_OFFSET))(this);
		}

		::System::Void ResetAllBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETALLBUBBLE_OFFSET))(this);
		}

		::System::Void ResetTimeUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETTIMEUI_OFFSET))(this);
		}

		::MoleMole::UICinemaBubbleBaseContext* GenerateGoodBubbleContext(::System::String* textmapText, ::System::Int32 locationIdx, ::System::Int32 hitNum, ::System::Single timeDuration, ::System::Action* onBeforePerClick, ::System::Func_1<::System::Int32>* onClick, ::System::Action* onMiss)
		{
			return ((::MoleMole::UICinemaBubbleBaseContext*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::System::Func_1<::System::Int32>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GENERATEGOODBUBBLECONTEXT_OFFSET))(this, textmapText, locationIdx, hitNum, timeDuration, onBeforePerClick, onClick, onMiss);
		}

		::System::Void SwitchGoodBubbleSoundState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHGOODBUBBLESOUNDSTATE_OFFSET))(this);
		}

		::MoleMole::UICinemaBubbleBaseContext* GenerateBadBubbleContext(::System::String* textmapText, ::System::Int32 locationIdx, ::System::Int32 hitNum, ::System::Single timeDuration, ::System::Action* onBeforePerClick, ::System::Func_1<::System::Int32>* onClick)
		{
			return ((::MoleMole::UICinemaBubbleBaseContext*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GENERATEBADBUBBLECONTEXT_OFFSET))(this, textmapText, locationIdx, hitNum, timeDuration, onBeforePerClick, onClick);
		}

		::System::Void ShowNormalBubble(::Class_2_3F802DF1B3FAD67A_1* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_1*, ::System::String*, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowNormalBubble_1(::Class_2_3F802DF1B3FAD67A_1* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_1*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWNORMALBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::Class_0_16E4307DCC419505_627* GetNormalBubbleWidgetBySide(::System::Boolean isRightSide, ::UnityEngine::Transform* parentLocation, ::MoleMole::UICinemaBubbleBaseContext* context)
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::MoleMole::UICinemaBubbleBaseContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETNORMALBUBBLEWIDGETBYSIDE_OFFSET))(this, isRightSide, parentLocation, context);
		}

		::System::Void ShowMultiClickBubble(::Class_2_3F802DF1B3FAD67A* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A*, ::System::String*, ::System::Int32, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_OFFSET))(this, bubbleEvent, textmapText, hitNum, onClick);
		}

		::System::Void ShowMultiClickBubble_1(::Class_2_3F802DF1B3FAD67A* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWMULTICLICKBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, hitNum, bubbleLocation, timeDuration, item, onClick);
		}

		::Class_0_16E4307DCC419505_627* GetMultiClickBubbleWidgetBySide(::System::Boolean isRightSide, ::UnityEngine::Transform* parentLocation, ::MoleMole::UICinemaBubbleBaseContext* context)
		{
			return ((::Class_0_16E4307DCC419505_627*(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::MoleMole::UICinemaBubbleBaseContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETMULTICLICKBUBBLEWIDGETBYSIDE_OFFSET))(this, isRightSide, parentLocation, context);
		}

		::System::Void ShowBadBubble(::Class_2_3F802DF1B3FAD67A_3* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_3*, ::System::String*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowBadBubble_1(::Class_2_3F802DF1B3FAD67A_3* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_3*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWBADBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void ShowSuperBubble(::Class_2_3F802DF1B3FAD67A_5* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_5*, ::System::String*, ::System::Int32, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_OFFSET))(this, bubbleEvent, textmapText, hitNum, onClick);
		}

		::System::Void ShowSuperBubble_1(::Class_2_3F802DF1B3FAD67A_5* bubbleEvent, ::System::String* textmapText, ::System::Int32 hitNum, ::System::Single timeDuration, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_5*, ::System::String*, ::System::Int32, ::System::Single, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSUPERBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, hitNum, timeDuration, onClick);
		}

		::System::Void ShowClearAllBubble(::Class_2_3F802DF1B3FAD67A_2* bubbleEvent, ::System::String* textmapText, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_2*, ::System::String*, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_OFFSET))(this, bubbleEvent, textmapText, onClick);
		}

		::System::Void ShowClearAllBubble_1(::Class_2_3F802DF1B3FAD67A_2* bubbleEvent, ::System::String* textmapText, ::System::Int32 bubbleLocation, ::System::Single timeDuration, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_2*, ::System::String*, ::System::Int32, ::System::Single, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Func_1<::Foundation::Tuple_2<::System::Int32, ::System::Single>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCLEARALLBUBBLE_1_OFFSET))(this, bubbleEvent, textmapText, bubbleLocation, timeDuration, item, onClick);
		}

		::System::Void ShowScoreAtLocation(::System::Int32 basicScore, ::System::Single multiplier, ::UnityEngine::Transform* scoreRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWSCOREATLOCATION_OFFSET))(this, basicScore, multiplier, scoreRoot);
		}

		::System::Void ShowComboAtLocation(::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_1* locationView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCOMBOATLOCATION_OFFSET))(this, locationView);
		}

		::System::Void ShowComboUI_Inner(::UnityEngine::Transform* comboRoot, ::UnityEngine::UI::Extension::UILocalizationText* combo, ::UnityEngine::UI::Extension::UILocalizationText* comboNum, ::UnityEngine::UI::Extension::UILocalizationText* comboPunctuation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWCOMBOUI_INNER_OFFSET))(this, comboRoot, combo, comboNum, comboPunctuation);
		}

		::System::Void DispatchGraphEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_DISPATCHGRAPHEVENT_OFFSET))(this, eventName);
		}

		::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_1* GetLocationViewByLocation(::System::Int32 bubbleLocation)
		{
			return ((::Class_2_7341BF3E408F4DA8_Class_2_5F3C14FED1CE4C5F_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETLOCATIONVIEWBYLOCATION_OFFSET))(this, bubbleLocation);
		}

		::System::Void ResetBubbleDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETBUBBLEDIC_OFFSET))(this);
		}

		::System::Void UpdateBubbleDict(::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem item, ::System::Int32 location, ::System::Boolean willShow, ::Class_0_16E4307DCC419505_627* bubble)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaSingleBeatMapConfig_BeatMap_BeatItem, ::System::Int32, ::System::Boolean, ::Class_0_16E4307DCC419505_627*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEBUBBLEDICT_OFFSET))(this, item, location, willShow, bubble);
		}

		::System::Void ResetLocationClickableDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETLOCATIONCLICKABLEDIC_OFFSET))(this);
		}

		::System::Boolean CheckLocationMissClickable(::System::Int32 location)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CHECKLOCATIONMISSCLICKABLE_OFFSET))(this, location);
		}

		::System::Void SwitchLocationMissClickable(::System::Int32 location, ::System::Boolean isClickable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SWITCHLOCATIONMISSCLICKABLE_OFFSET))(this, location, isClickable);
		}

		::System::Void InitBackgroundBtnGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_INITBACKGROUNDBTNGROUP_OFFSET))(this);
		}

		::System::Void StartFeverUpdate(::Class_2_3F802DF1B3FAD67A_4* feverEvent, ::System::Action* onFeverEnd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_3F802DF1B3FAD67A_4*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERUPDATE_OFFSET))(this, feverEvent, onFeverEnd);
		}

		::System::Void UpdateFever(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEFEVER_OFFSET))(this, deltaTime);
		}

		::System::Void TriggerFeverEnd(::System::Boolean isTriggeredByRestart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRIGGERFEVEREND_OFFSET))(this, isTriggeredByRestart);
		}

		::System::Void StartFeverAppearUpdate(::System::Single appearDuration, ::System::Single toFeverStartDuration, ::System::Action* triggerOnStartFever, ::System::Action* triggerOnFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEARUPDATE_OFFSET))(this, appearDuration, toFeverStartDuration, triggerOnStartFever, triggerOnFinish);
		}

		::System::Void UpdateFeverAppear(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEFEVERAPPEAR_OFFSET))(this, deltaTime);
		}

		::System::Void ResetFeverAppearParamsWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETFEVERAPPEARPARAMSWHENRESTART_OFFSET))(this);
		}

		::System::Void UpdateScore(::System::Int32 score, ::Enum_3_E2714210413A69CA level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_E2714210413A69CA))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATESCORE_OFFSET))(this, score, level);
		}

		::System::Void SetNewScore(::System::Int32 currScore, ::Il2CppArray<::System::Boolean>*& validNumIdxArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Boolean>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SETNEWSCORE_OFFSET))(this, currScore, validNumIdxArray);
		}

		::System::Void RefreshCombo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_REFRESHCOMBO_OFFSET))(this);
		}

		::System::Void UpdateComboCount(::System::Int32 newCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOCOUNT_OFFSET))(this, newCount);
		}

		::System::Void PlayComboIncreaseAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYCOMBOINCREASEANIM_OFFSET))(this);
		}

		::System::Void UpdateComboMultiplier(::System::Single newMulti)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATECOMBOMULTIPLIER_OFFSET))(this, newMulti);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetComboImgByInt(::System::Int32 number)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_GETCOMBOIMGBYINT_OFFSET))(this, number);
		}

		::System::Void SetTimeProgress(::System::Single currTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SETTIMEPROGRESS_OFFSET))(this, currTimer);
		}

		::System::Void ResetTimeBarUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_RESETTIMEBARUI_OFFSET))(this);
		}

		::System::Void StartFeverAppear(::Class_2_51BFD8DFDA25B0B4* feverAppearEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_51BFD8DFDA25B0B4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_STARTFEVERAPPEAR_OFFSET))(this, feverAppearEvent);
		}

		::System::Void ShowFeverUI(::System::Single centerPointPercent, ::System::Single widthPercent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_SHOWFEVERUI_OFFSET))(this, centerPointPercent, widthPercent);
		}

		::System::Void PlayFeverWidgetFadeAnim(::System::Boolean willShow, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERWIDGETFADEANIM_OFFSET))(this, willShow, onFinish);
		}

		::System::Void PlayFeverWidgetFeverAnim(::System::Boolean willInFever, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYFEVERWIDGETFEVERANIM_OFFSET))(this, willInFever, onFinish);
		}

		::System::Void PlayTimeBarFeverAnim(::System::Boolean willInFever, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_PLAYTIMEBARFEVERANIM_OFFSET))(this, willInFever, onFinish);
		}

		::System::Void HideFeverUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_HIDEFEVERUI_OFFSET))(this);
		}

		::System::Void ChangeFeverUIColor(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_CHANGEFEVERUICOLOR_OFFSET))(this, isShow);
		}

		::System::Boolean TryTriggerAvatarAnimCountdown(::System::Single totalAnimTime, ::System::Action* onFinish)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRYTRIGGERAVATARANIMCOUNTDOWN_OFFSET))(this, totalAnimTime, onFinish);
		}

		::System::Void UpdateAvatarAnim(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_UPDATEAVATARANIM_OFFSET))(this, deltaTime);
		}

		::System::Void TriggerAvatarAnimFinish(::System::Boolean isTriggeredWhenRestart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER_TRIGGERAVATARANIMFINISH_OFFSET))(this, isTriggeredWhenRestart);
		}

		::System::Boolean _ShowPlayerEffect_b__36_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_B__36_0_OFFSET))(this);
		}

		::System::Void _StartFeverAppear_b__117_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__STARTFEVERAPPEAR_B__117_0_OFFSET))(this);
		}

		::System::Void _StartFeverAppear_b__117_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__STARTFEVERAPPEAR_B__117_1_OFFSET))(this);
		}

		::System::Void _HideFeverUI_b__122_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__HIDEFEVERUI_B__122_0_OFFSET))(this);
		}

		::System::Void _ChangeFeverUIColor_b__123_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CHANGEFEVERUICOLOR_B__123_0_OFFSET))(this);
		}

		::System::Void _ChangeFeverUIColor_b__123_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__CHANGEFEVERUICOLOR_B__123_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
