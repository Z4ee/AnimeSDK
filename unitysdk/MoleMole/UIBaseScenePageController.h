#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A472E51DCF07A558.h"
#include "unitysdk/Enum_3_C28CEB2A4B26C9A7.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/NodeGraph/MainCity/ESetCameraMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_442;
class Class_1_21918336DBB42BE8;
class Class_1_25479A17D745887B;
class Class_1_285B51729FE48850;
class Class_1_4784321C3B7F2731;
class Class_1_5BFBA851AB881BEA;
class Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7;
class Class_1_89C70488A8D240C1;
class Class_1_97AA85461D84B92D;
class Class_1_ABFA099FFDF04A09;
class Class_1_D3581D8A71834B25;
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
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_APPLYPAGECONTEXTDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x19A8B9A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET UNITYSDK_OFFSET(0x19A8C130)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGECAMERAMODE_OFFSET UNITYSDK_OFFSET(0x19A89010)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGEFOCUSCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x19A8A3E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET UNITYSDK_OFFSET(0x19A8C630)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DRAGCALLBACKOLD_OFFSET UNITYSDK_OFFSET(0x19A8AC20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x19A8C030)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET UNITYSDK_OFFSET(0x19A8C5F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x19A8C0B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETDRAGSCREENROTATESENSITIVITY_OFFSET UNITYSDK_OFFSET(0x19A8AE10)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET UNITYSDK_OFFSET(0x19A8C070)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET UNITYSDK_OFFSET(0x19A8BD10)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x19A8BD60)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x19A8B0D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x19A8AFE0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x19A8AFA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x19A8B050)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x19A8CB00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_DATECAMERACONTROLWIDGET_OFFSET UNITYSDK_OFFSET(0x19A8CAF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x19A8B030)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x19A8B0B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x19A8B070)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x19A8B090)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x19A8AFC0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_PAGECONTEXT_OFFSET UNITYSDK_OFFSET(0x19A8AF90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x19A8AFF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x19A8B010)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET UNITYSDK_OFFSET(0x19A8B060)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HANDLEMAINCITY_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x19A8C7E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLEEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x19A8BC20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0x19A8BBD0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET UNITYSDK_OFFSET(0x19A8B9E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET UNITYSDK_OFFSET(0x19A8BDA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x19A8C550)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x19A8C500)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET UNITYSDK_OFFSET(0x19A8B4B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x19A8B440)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19A8BDF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONINPUTACTION_CAMERACONTROL_OFFSET UNITYSDK_OFFSET(0x19A88AC0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A8B3D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET UNITYSDK_OFFSET(0x19A8BA20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19A8B500)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A8B740)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A8B0F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A8B240)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x19A8C0F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET UNITYSDK_OFFSET(0x19A8BC70)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET UNITYSDK_OFFSET(0x19A8C4B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x19A8BCC0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0x19A8B0E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x19A8AFB0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0x19A8B040)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0x19A8B0C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0x19A8B080)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0x19A8B0A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0x19A8AFD0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0x19A8B000)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0x19A8B020)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0x19A8BB80)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET UNITYSDK_OFFSET(0x19A8BAE0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x19A8BA90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0x19A8BB30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET UNITYSDK_OFFSET(0x19A8C5A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CHANGECAMERAMODE_B__11_1_OFFSET UNITYSDK_OFFSET(0x19A8CB60)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A8CB10)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET UNITYSDK_OFFSET(0x19A8B960)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0x19A8CB70)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0x19A8CC00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19A8CC90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19A8CD20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19A8CD30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A8CDF0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A8CE00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A8CE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_TypeDefinitionIndex = 57119;

	class UIBaseScenePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_97AA85461D84B92D* _scopedFixedCamera; // 0x318
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
		::Class_1_285B51729FE48850* _OngoingChatPlayer_k__BackingField; // 0x370
		::Class_1_D3581D8A71834B25* _ScriptableAnimationPlayer_k__BackingField; // 0x378
		::Class_1_ABFA099FFDF04A09* _UnitManager_k__BackingField; // 0x380
		::Class_1_4784321C3B7F2731* _HudLogicManager_k__BackingField; // 0x388
		::MoleMole::UIMissionTipsContainerWidgetController* _missionTipsContainer; // 0x390
		::System::Boolean _consoleActive; // 0x398
		::System::Boolean _IsBeforePageFadeOuting_k__BackingField; // 0x399
		::System::Boolean _IsInOpenOtherPageTransition_k__BackingField; // 0x39A
		::Class_1_25479A17D745887B* _InputActionHandler_k__BackingField; // 0x3A0
		::Class_1_5BFBA851AB881BEA* _BaseScenePageLogic_k__BackingField; // 0x3A8
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

		::System::Void ChangeFocusCameraMode(::Class_0_16E4307DCC419505_442* target, ::System::Single fieldOfView, ::System::Single pitch, ::System::Single blendDuration, ::System::String* blendCurve, ::System::Single playerScreenOffsetX, ::System::Single targetScreenOffsetX, ::System::Single playerScreenOffsetY, ::System::Single targetScreenOffsetY, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_442*, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_CHANGEFOCUSCAMERAMODE_OFFSET))(this, target, fieldOfView, pitch, blendDuration, blendCurve, playerScreenOffsetX, targetScreenOffsetX, playerScreenOffsetY, targetScreenOffsetY, radius);
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

		::Class_1_285B51729FE48850* get_OngoingChatPlayer()
		{
			return ((::Class_1_285B51729FE48850*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET))(this);
		}

		::System::Void set_OngoingChatPlayer(::Class_1_285B51729FE48850* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_285B51729FE48850*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_CanPlayOngoingChatImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET))(this);
		}

		::Class_1_D3581D8A71834B25* get_ScriptableAnimationPlayer()
		{
			return ((::Class_1_D3581D8A71834B25*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this);
		}

		::System::Void set_ScriptableAnimationPlayer(::Class_1_D3581D8A71834B25* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D3581D8A71834B25*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this, value);
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

		::Class_1_5BFBA851AB881BEA* get_BaseScenePageLogic()
		{
			return ((::Class_1_5BFBA851AB881BEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET))(this);
		}

		::System::Void set_BaseScenePageLogic(::Class_1_5BFBA851AB881BEA* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5BFBA851AB881BEA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
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

		::System::Boolean HasAnyBubbleExcludeCtrl(::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>* predicate, ::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::MoleMole::UIGeneralNewsBubbleRowWidgetController*, ::System::Boolean>*, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLEEXCLUDECTRL_OFFSET))(this, predicate, excludeCtrl);
		}

		::MoleMole::UIMessageChildWindowController* OpenMessageTip(::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>* userList)
		{
			return ((::MoleMole::UIMessageChildWindowController*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_2C0963FB259F05B7*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET))(this, userList);
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

		::System::Void DispatchToChild(::Enum_3_C28CEB2A4B26C9A7 eventNotifyType, ::Enum_3_A472E51DCF07A558 slotEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C28CEB2A4B26C9A7, ::Enum_3_A472E51DCF07A558))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET))(this, eventNotifyType, slotEvent);
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

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
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
