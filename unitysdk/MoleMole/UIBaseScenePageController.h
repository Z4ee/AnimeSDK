#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_86D58C2A2996E647.h"
#include "unitysdk/Enum_3_A472E51DCF07A558.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/NodeGraph/MainCity/ESetCameraMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_232;
class Class_1_21918336DBB42BE8;
class Class_1_25479A17D745887B;
class Class_1_38AB624F12E9F95A;
class Class_1_4784321C3B7F2731;
class Class_1_5FAE93110E8848E3;
class Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2;
class Class_1_7AD164144758E750;
class Class_1_89C70488A8D240C1;
class Class_1_ABFA099FFDF04A09;
class Class_1_C376DB68B1C74261;
class Class_1_F3CC150E5334846F;
namespace MoleMole { class UIBaseScenePageController_Context; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralChapterFinishWidgetController_Context; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController_Context; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelTimerWidgetController_Context; }
namespace MoleMole { class UIMessageChildWindowController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIRewardTipsWidgetController; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_APPLYPAGECONTEXTDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1869D180)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET UNITYSDK_OFFSET(0x1869D8C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGECAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1869A840)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGEFOCUSCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1869BC40)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET UNITYSDK_OFFSET(0x1869DDB0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DRAGCALLBACKOLD_OFFSET UNITYSDK_OFFSET(0x1869C480)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x1869D7C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET UNITYSDK_OFFSET(0x1869DD70)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x1869D840)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETDRAGSCREENROTATESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x1869C670)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET UNITYSDK_OFFSET(0x1869D800)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET UNITYSDK_OFFSET(0x1869D4A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x1869D4F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x1869C930)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1869C840)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1869C800)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x1869C8B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x1869E270)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLWIDGET_OFFSET UNITYSDK_OFFSET(0x1869E260)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x1869C890)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1869C910)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x1869C8D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x1869C8F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x1869C820)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_PAGECONTEXT_OFFSET UNITYSDK_OFFSET(0x1869C7F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x1869C850)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x1869C870)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET UNITYSDK_OFFSET(0x1869C8C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HANDLEMAINCITY_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x1869DF50)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x1869D3B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET UNITYSDK_OFFSET(0x1869D1C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1869D530)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1869DCD0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1869DC80)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1869CCA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1869CC30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1869D580)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONINPUTACTION_CAMERACONTROL_OFFSET UNITYSDK_OFFSET(0x1869A2E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET UNITYSDK_OFFSET(0x1869D200)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1869CCF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1869CF30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1869C950)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1869CAA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x1869D880)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET UNITYSDK_OFFSET(0x1869D400)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x1869DC30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x1869D450)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x1869C940)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1869C810)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x1869C8A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x1869C920)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x1869C8E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x1869C900)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x1869C830)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x1869C860)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x1869C880)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0x1869D360)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET UNITYSDK_OFFSET(0x1869D2C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1869D270)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x1869D310)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET UNITYSDK_OFFSET(0x1869DD20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CHANGECAMERAMODE_B__11_1_OFFSET UNITYSDK_OFFSET(0x1869E2D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1869E280)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET UNITYSDK_OFFSET(0x1869D140)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x1869E2E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1869E370)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1869E400)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1869E490)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1869E550)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1869E560)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1869E570)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_TypeDefinitionIndex = 43775;

	class UIBaseScenePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_5FAE93110E8848E3* _scopedFixedCamera; // 0x318
		::System::Single _curExitBlend; // 0x320
		::Class_1_89C70488A8D240C1* _scopedPhotoCamera; // 0x328
		::Class_1_F3CC150E5334846F* _scopedFocusCameraMode; // 0x330
		::NodeGraph::MainCity::ESetCameraMode _currentMode; // 0x338
		::UnityEngine::Vector3 _pivotLocation; // 0x33C
		::System::Boolean _fadeEnd; // 0x348
		::System::Single _minYaw; // 0x34C
		::System::Single _maxYaw; // 0x350
		::System::Single _initYaw; // 0x354
		::MoleMole::UIBaseScenePageController_Context* _pageContext; // 0x358
		::Class_1_21918336DBB42BE8* _CommonEventHandler_k__BackingField; // 0x360
		::MoleMole::UIGeneralLevelUp02WidgetController* LevelUpController; // 0x368
		::Class_1_38AB624F12E9F95A* _OngoingChatPlayer_k__BackingField; // 0x370
		::Class_1_C376DB68B1C74261* _ScriptableAnimationPlayer_k__BackingField; // 0x378
		::Class_1_ABFA099FFDF04A09* _UnitManager_k__BackingField; // 0x380
		::Class_1_4784321C3B7F2731* _HudLogicManager_k__BackingField; // 0x388
		::MoleMole::UIMissionTipsContainerWidgetController* _missionTipsContainer; // 0x390
		::System::Boolean _consoleActive; // 0x398
		::System::Boolean _IsBeforePageFadeOuting_k__BackingField; // 0x399
		::System::Boolean _IsInOpenOtherPageTransition_k__BackingField; // 0x39A
		::Class_1_25479A17D745887B* _InputActionHandler_k__BackingField; // 0x3A0
		::Class_1_7AD164144758E750* _BaseScenePageLogic_k__BackingField; // 0x3A8
		::UnityEngine::GameObject* _DateCameraControlWidget_k__BackingField; // 0x3B0
		::UnityEngine::UI::Extension::UIImgEventTrigger* _DateCameraControlButton_k__BackingField; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean OnInputAction_CameraControl(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONINPUTACTION_CAMERACONTROL_OFFSET))(this, inputAction);
		}

		::System::Void ChangeCameraMode(::NodeGraph::MainCity::ESetCameraMode setCameraMode, ::System::String* blendCurve, ::System::Single blendDuration, ::UnityEngine::Vector3 location, ::System::Nullable_1<::UnityEngine::Vector3> rotation, ::System::Single fov, ::System::Single radius, ::System::Single minPatch, ::System::Single maxPatch, ::System::Single minYaw, ::System::Single maxYaw, ::System::Single exitDuration, ::System::Boolean clear)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::MainCity::ESetCameraMode, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGECAMERAMODE_OFFSET))(this, setCameraMode, blendCurve, blendDuration, location, rotation, fov, radius, minPatch, maxPatch, minYaw, maxYaw, exitDuration, clear);
		}

		::System::Void ChangeFocusCameraMode(::Class_0_16E4307DCC419505_232* target, ::System::Single fieldOfView, ::System::Single pitch, ::System::Single blendDuration, ::System::String* blendCurve, ::System::Single playerScreenOffsetX, ::System::Single targetScreenOffsetX, ::System::Single playerScreenOffsetY, ::System::Single targetScreenOffsetY, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_232*, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGEFOCUSCAMERAMODE_OFFSET))(this, target, fieldOfView, pitch, blendDuration, blendCurve, playerScreenOffsetX, targetScreenOffsetX, playerScreenOffsetY, targetScreenOffsetY, radius);
		}

		::System::Void DragCallbackOld(::UnityEngine::EventSystems::PointerEventData* eventdata, ::UnityEngine::Vector2 localPointDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_DRAGCALLBACKOLD_OFFSET))(this, eventdata, localPointDelta);
		}

		::System::Single GetDragScreenRotateSensitivity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETDRAGSCREENROTATESENSITIVITY_OFFSET))(this);
		}

		::MoleMole::UIBaseScenePageController_Context* get_PageContext()
		{
			return ((::MoleMole::UIBaseScenePageController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_PAGECONTEXT_OFFSET))(this);
		}

		::Class_1_21918336DBB42BE8* get_CommonEventHandler()
		{
			return ((::Class_1_21918336DBB42BE8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET))(this);
		}

		::System::Void set_CommonEventHandler(::Class_1_21918336DBB42BE8* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21918336DBB42BE8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET))(this, value);
		}

		::Class_1_38AB624F12E9F95A* get_OngoingChatPlayer()
		{
			return ((::Class_1_38AB624F12E9F95A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET))(this);
		}

		::System::Void set_OngoingChatPlayer(::Class_1_38AB624F12E9F95A* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_38AB624F12E9F95A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_CanPlayOngoingChatImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET))(this);
		}

		::Class_1_C376DB68B1C74261* get_ScriptableAnimationPlayer()
		{
			return ((::Class_1_C376DB68B1C74261*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this);
		}

		::System::Void set_ScriptableAnimationPlayer(::Class_1_C376DB68B1C74261* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C376DB68B1C74261*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this, value);
		}

		::Class_1_ABFA099FFDF04A09* get_UnitManager()
		{
			return ((::Class_1_ABFA099FFDF04A09*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET))(this);
		}

		::System::Void set_UnitManager(::Class_1_ABFA099FFDF04A09* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ABFA099FFDF04A09*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET))(this, value);
		}

		::Class_1_4784321C3B7F2731* get_HudLogicManager()
		{
			return ((::Class_1_4784321C3B7F2731*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET))(this);
		}

		::System::Void set_HudLogicManager(::Class_1_4784321C3B7F2731* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4784321C3B7F2731*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET))(this, value);
		}

		::System::Boolean get_ConsoleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_WheelShortcutPop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET))(this);
		}

		::System::Boolean get_IsBeforePageFadeOuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET))(this);
		}

		::System::Void set_IsBeforePageFadeOuting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET))(this, value);
		}

		::System::Boolean get_IsInOpenOtherPageTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this);
		}

		::System::Void set_IsInOpenOtherPageTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this, value);
		}

		::Class_1_25479A17D745887B* get_InputActionHandler()
		{
			return ((::Class_1_25479A17D745887B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET))(this);
		}

		::System::Void set_InputActionHandler(::Class_1_25479A17D745887B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_25479A17D745887B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET))(this, value);
		}

		::Class_1_7AD164144758E750* get_BaseScenePageLogic()
		{
			return ((::Class_1_7AD164144758E750*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET))(this);
		}

		::System::Void set_BaseScenePageLogic(::Class_1_7AD164144758E750* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AD164144758E750*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadeTransitionChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET))(this, args);
		}

		::System::Void OnFadeTransitionChange_1(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET))(this, isStart);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _WarmUpWidgets_OnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET))(this);
		}

		::System::Void ApplyPageContextDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_APPLYPAGECONTEXTDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void InitSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET))(this);
		}

		::System::Void OnTimelineForceStopOngoingChat(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET))(this, args);
		}

		::System::Void ShowLevelUpEffect(::MoleMole::UIGeneralLevelUp02WidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralLevelUp02WidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowInLevelTimerEffect(::MoleMole::UIInLevelTimerWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelTimerWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET))(this, context);
		}

		::System::Void ShowWorldLevelUpEffect(::MoleMole::UIWorldLevelUpWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorldLevelUpWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowChapterFinishEffect(::MoleMole::UIGeneralChapterFinishWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralChapterFinishWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET))(this, context);
		}

		::System::Boolean HasAnyBubbleTipExcludeCtrl(::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET))(this, excludeCtrl);
		}

		::MoleMole::UIMessageChildWindowController* OpenMessageTip(::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>* userList)
		{
			return ((::MoleMole::UIMessageChildWindowController*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_A69750F91764E9C2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET))(this, userList);
		}

		::System::Void SetConsoleActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active);
		}

		::MoleMole::UIMissionTipsContainerWidgetController* GetMissionTips()
		{
			return ((::MoleMole::UIMissionTipsContainerWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET))(this);
		}

		::MoleMole::UIRewardTipsWidgetController* GetRewardTips()
		{
			return ((::MoleMole::UIRewardTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET))(this);
		}

		::System::Boolean MuteMenuBtnClick(::System::Boolean showLog)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET))(this, showLog);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelUpRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET))(this);
		}

		::System::Void BindTweenSlot(::UnityEngine::Transform* transform, ::System::Func_1<::System::Int32>* getSlotLeftCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET))(this, transform, getSlotLeftCount);
		}

		::System::Void PlayBlockFairyFadeout(::System::Boolean isNewbie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET))(this, isNewbie);
		}

		::System::Void OnBeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void OnBeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Boolean TryBlockFairy(::System::Boolean isNewbie)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET))(this, isNewbie);
		}

		::UnityEngine::Transform* GetBottomTips()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET))(this);
		}

		::System::Void DispatchToChild(::Enum_3_86D58C2A2996E647 eventNotifyType, ::Enum_3_A472E51DCF07A558 slotEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_86D58C2A2996E647, ::Enum_3_A472E51DCF07A558))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET))(this, eventNotifyType, slotEvent);
		}

		::System::Void HandleMainCity_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_HANDLEMAINCITY_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_DateCameraControlWidget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLWIDGET_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIImgEventTrigger* get_DateCameraControlButton()
		{
			return ((::UnityEngine::UI::Extension::UIImgEventTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLBUTTON_OFFSET))(this);
		}

		::System::Void _ChangeCameraMode_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__CHANGECAMERAMODE_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnBeforePageFadeIn(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_OnBeforePageFadeOut(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
