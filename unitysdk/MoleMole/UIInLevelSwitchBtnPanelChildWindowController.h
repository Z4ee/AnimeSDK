#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_DragType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_FadeInType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_FadeOutType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_LogicType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType.h"
#include "unitysdk/MoleMole/UIInLevelSwitchBtnPanelChildWindowController_TriggerType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_FEB95EB7BCDEE1B8;
class Class_2_60638234271CCDB8_45;
class Class_3_816015CAFD8353F7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine { class AnimatorOverrideController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALBUTTONCENTERPOSITION_1_OFFSET UNITYSDK_OFFSET(0x163AAB00)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALBUTTONCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x163AA9D0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALTOUCHBUTTONUPTYPE_1_OFFSET UNITYSDK_OFFSET(0x163AB360)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALTOUCHBUTTONUPTYPE_OFFSET UNITYSDK_OFFSET(0x163A8DF0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CHECKBUTTONNEW_OFFSET UNITYSDK_OFFSET(0x163A9D50)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CHECKBUTTONOLD_OFFSET UNITYSDK_OFFSET(0x163AA680)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x163A7510)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_DOAVATARAIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x163A8500)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_DOAVATARENDAIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x163A8690)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GETUIHIDEITEMTAG_OFFSET UNITYSDK_OFFSET(0x163A81B0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x163A8120)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0x163A5840)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x163A5A90)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITDRAGINPUTSUPPORT_OFFSET UNITYSDK_OFFSET(0x163A6960)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET UNITYSDK_OFFSET(0x163A5BA0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET UNITYSDK_OFFSET(0x163A6770)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSWITCHAVATARBTN_OFFSET UNITYSDK_OFFSET(0x163A60B0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSWITCHAVATARCOMPONENT_OFFSET UNITYSDK_OFFSET(0x163A8490)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ISLOCALAVATARSHOWPERFECTSWITCHENERGY_OFFSET UNITYSDK_OFFSET(0x163AD0A0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x163A8030)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x163ABC90)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x163A5AA0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x163A7970)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONPREUPDATE_OFFSET UNITYSDK_OFFSET(0x163A9540)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONQTEPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x163ACD90)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_LOGIC_WITHNOTHING_OFFSET UNITYSDK_OFFSET(0x163A9020)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_LOGIC_WITHPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x163A8A60)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x163A89A0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDRAGINNER_OFFSET UNITYSDK_OFFSET(0x163A9120)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0x163A9090)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x163A93E0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x163A9460)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHNOTHING_OFFSET UNITYSDK_OFFSET(0x163A8130)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x163A8B50)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHTOUCHBUTTONUPTYPE_OFFSET UNITYSDK_OFFSET(0x163A8F90)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_OFFSET UNITYSDK_OFFSET(0x163A8AE0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_VIEW_OFFSET UNITYSDK_OFFSET(0x163A8CB0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x163A7020)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x163A70B0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x163A5B30)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x163A6D40)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHAIDATTACKSTATE_OFFSET UNITYSDK_OFFSET(0x163AD050)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHQTEPOINT_OFFSET UNITYSDK_OFFSET(0x163ACDF0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHSWITCHMATERIAL_OFFSET UNITYSDK_OFFSET(0x163ACEC0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REGISTERONQTEPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x163A8820)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_RESETBUTTONROOTANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x163A94E0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SETBUTTONICON_OFFSET UNITYSDK_OFFSET(0x163A6CD0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SET_LOGICTYPE_OFFSET UNITYSDK_OFFSET(0x163A5A30)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x163A7F60)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_TRYFIRELOGICBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x163AB880)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UNREGISTERONQTEPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0x163A7880)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEBUTTONVIEWNEW_OFFSET UNITYSDK_OFFSET(0x163AA4D0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEMUTESWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x163AC1D0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEPERFECTSWITCH_OFFSET UNITYSDK_OFFSET(0x163ABD10)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEQTETRIGGERMASK_OFFSET UNITYSDK_OFFSET(0x163ACC30)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATERECOVERYMASK_OFFSET UNITYSDK_OFFSET(0x163AC980)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATESWITCHBTNVIEWTYPE_OFFSET UNITYSDK_OFFSET(0x163A9730)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x163AD3C0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x163AD340)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITDRAGINPUTSUPPORT_B__69_0_OFFSET UNITYSDK_OFFSET(0x163AD990)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITDRAGINPUTSUPPORT_B__69_1_OFFSET UNITYSDK_OFFSET(0x163ADB10)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_0_OFFSET UNITYSDK_OFFSET(0x163AD3E0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_1_OFFSET UNITYSDK_OFFSET(0x163AD440)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_2_OFFSET UNITYSDK_OFFSET(0x163AD4A0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_4_OFFSET UNITYSDK_OFFSET(0x163AD510)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_5_OFFSET UNITYSDK_OFFSET(0x163AD960)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_6_OFFSET UNITYSDK_OFFSET(0x163AD8E0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_7_OFFSET UNITYSDK_OFFSET(0x163AD920)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x163AE0C0)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x163AE150)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x163AE180)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x163AE240)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x163AE250)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x163AE260)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex = 46278;

	class UIInLevelSwitchBtnPanelChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType* StaticGet__logicType()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0xF570);
		}
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_FadeInType* StaticGet_fadeInType()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_FadeInType*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0xF574);
		}
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_DragType* StaticGet_dragType()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_DragType*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0xF578);
		}
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_FadeOutType* StaticGet_fadeOutType()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_FadeOutType*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0xF57C);
		}
		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TriggerType* StaticGet_triggerType()
		{
			return (::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TriggerType*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSwitchBtnPanelChildWindowController_TypeDefinitionIndex)->GetStaticField(0xF580);
		}
		::System::String* _uiHideItemTag; // 0x310
		::System::Boolean _isMatDirty; // 0x318
		::Class_2_60638234271CCDB8_45* _view; // 0x320
		::System::Single lastRecoveryMaskFillRatio; // 0x328
		::System::Single lastQTETriggerMaskFillRatio; // 0x32C
		::System::Boolean _isMuteSwitch; // 0x330
		::System::Boolean _isAidAttackOn; // 0x331
		::Class_3_816015CAFD8353F7* _switchAvatarComponent; // 0x338
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl; // 0x340
		::UnityEngine::Material* _perfectSwitchMaterial; // 0x348
		::UnityEngine::Material* _perfectSwitchEmptyMaterial; // 0x350
		::System::Boolean _isInPerfectSwitch; // 0x358
		::System::Int32 _perfectSwitchPoint; // 0x35C
		::System::Boolean _isPerfectSwitchEnergyEnough; // 0x360
		::System::Boolean _isTouchButtonDown; // 0x361
		::System::Boolean _isToggleCurFrame; // 0x362
		::System::Boolean _isClickByTouch; // 0x363
		::System::Boolean _isTouchButtonDownCurFrame; // 0x364
		::System::Boolean _isTouchButtonUpCurFrame; // 0x365
		::System::Nullable_1<::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType> _touchButtonUpType; // 0x368
		::System::Nullable_1<::UnityEngine::Vector2> _lastButtonDragScreenPoint; // 0x370
		::System::Nullable_1<::UnityEngine::Vector2> _buttonDragStartScreenPoint; // 0x37C
		::Foundation::Coroutine::CoroutineHandle _effCoroutineHandle01; // 0x388
		::Foundation::Coroutine::CoroutineHandle _effCoroutineHandle02; // 0x38C
		::UnityEngine::AnimatorOverrideController* _animatorOverrideController; // 0x390
		::System::String* switchOutlineFadeIn; // 0x398
		::System::String* switchOutlineFadeOut; // 0x3A0
		::System::Boolean HasInitAnim; // 0x3A8
		::Class_1_FEB95EB7BCDEE1B8* _dragInputSupport; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType get_logicType()
		{
			return ((::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_LOGICTYPE_OFFSET))();
		}

		static ::System::Void set_logicType(::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType value)
		{
			return ((::System::Void(*)(::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_LogicType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SET_LOGICTYPE_OFFSET))(value);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetButtonIcon(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SETBUTTONICON_OFFSET))(this, path);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::String* GetUIHideItemTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GETUIHIDEITEMTAG_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid InitSwitchAvatarComponent()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSWITCHAVATARCOMPONENT_OFFSET))(this);
		}

		::System::Void InitSwitchAvatarBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSWITCHAVATARBTN_OFFSET))(this);
		}

		::System::Void SwitchAvatar(::System::Boolean isPrev)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_SWITCHAVATAR_OFFSET))(this, isPrev);
		}

		::System::Void DoAvatarAidTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_DOAVATARAIDTRIGGER_OFFSET))(this);
		}

		::System::Void DoAvatarEndAidTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_DOAVATARENDAIDTRIGGER_OFFSET))(this);
		}

		::System::Void InitSkillBtnSpecialFeedback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITSKILLBTNSPECIALFEEDBACK_OFFSET))(this);
		}

		::System::Void RegisterOnQTEPointChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REGISTERONQTEPOINTCHANGED_OFFSET))(this);
		}

		::System::Void UnRegisterOnQTEPointChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UNREGISTERONQTEPOINTCHANGED_OFFSET))(this);
		}

		::System::Void OnTouchPointerDown(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerUp(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerUp_Logic_WithPointerPosition(::UnityEngine::Vector2 pointerPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHPOINTERPOSITION_OFFSET))(this, pointerPosition);
		}

		::System::Void OnTouchPointerUp_Logic_WithTouchButtonUpType(::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType touchButtonUpType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHTOUCHBUTTONUPTYPE_OFFSET))(this, touchButtonUpType);
		}

		::System::Void OnTouchPointerUp_Logic_WithNothing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_LOGIC_WITHNOTHING_OFFSET))(this);
		}

		::System::Void OnTouchPointerUp_View()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERUP_VIEW_OFFSET))(this);
		}

		::System::Void OnTouchPointerDown_Logic_WithPointerPosition(::UnityEngine::Vector2 pointerPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_LOGIC_WITHPOINTERPOSITION_OFFSET))(this, pointerPosition);
		}

		::System::Void OnTouchPointerDown_Logic_WithNothing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDOWN_LOGIC_WITHNOTHING_OFFSET))(this);
		}

		::System::Void OnTouchPointerDrag(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDRAG_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerEnter(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERENTER_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerExit(::UnityEngine::EventSystems::PointerEventData* pointerEventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTEREXIT_OFFSET))(this, pointerEventData);
		}

		::System::Void OnTouchPointerDragInner(::System::Nullable_1<::UnityEngine::Vector2> pointerPosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONTOUCHPOINTERDRAGINNER_OFFSET))(this, pointerPosition);
		}

		::System::Void ResetButtonRootAnchoredPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_RESETBUTTONROOTANCHOREDPOSITION_OFFSET))(this);
		}

		::System::Void OnPreUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONPREUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateSwitchBtnViewType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATESWITCHBTNVIEWTYPE_OFFSET))(this);
		}

		::System::Void UpdateButtonViewNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEBUTTONVIEWNEW_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 CalButtonCenterPosition(::Class_2_60638234271CCDB8_45* view, ::UnityEngine::Vector2 touchPosition, ::System::Nullable_1<::UnityEngine::Vector2> touchStartPosition)
		{
			return ((::UnityEngine::Vector2(*)(::Class_2_60638234271CCDB8_45*, ::UnityEngine::Vector2, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALBUTTONCENTERPOSITION_OFFSET))(view, touchPosition, touchStartPosition);
		}

		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType CalTouchButtonUpType(::Class_2_60638234271CCDB8_45* view, ::UnityEngine::Vector2 touchScreenPoint, ::System::Nullable_1<::UnityEngine::Vector2> dragStartScreenPoint)
		{
			return ((::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType(*)(::Class_2_60638234271CCDB8_45*, ::UnityEngine::Vector2, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALTOUCHBUTTONUPTYPE_OFFSET))(view, touchScreenPoint, dragStartScreenPoint);
		}

		static ::UnityEngine::Vector2 CalButtonCenterPosition_1(::UnityEngine::RectTransform* buttonRoot, ::UnityEngine::RectTransform* maxDragArea, ::UnityEngine::Vector2 touchPosition, ::System::Nullable_1<::UnityEngine::Vector2> touchStartPosition)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALBUTTONCENTERPOSITION_1_OFFSET))(buttonRoot, maxDragArea, touchPosition, touchStartPosition);
		}

		static ::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType CalTouchButtonUpType_1(::UnityEngine::RectTransform* buttonRoot, ::UnityEngine::RectTransform* buttonArea, ::UnityEngine::RectTransform* minDragArea, ::UnityEngine::RectTransform* maxDragArea, ::UnityEngine::Vector2 touchScreenPoint, ::System::Nullable_1<::UnityEngine::Vector2> dragStartScreenPoint)
		{
			return ((::MoleMole::UIInLevelSwitchBtnPanelChildWindowController_TouchButtonUpType(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CALTOUCHBUTTONUPTYPE_1_OFFSET))(buttonRoot, buttonArea, minDragArea, maxDragArea, touchScreenPoint, dragStartScreenPoint);
		}

		::System::Void CheckButtonNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CHECKBUTTONNEW_OFFSET))(this);
		}

		::System::Nullable_1<::MoleMole::LogicButtonInputType> TryFireLogicButtonInput()
		{
			return ((::System::Nullable_1<::MoleMole::LogicButtonInputType>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_TRYFIRELOGICBUTTONINPUT_OFFSET))(this);
		}

		::System::Void CheckButtonOld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CHECKBUTTONOLD_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnQTEPointChanged(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ONQTEPOINTCHANGED_OFFSET))(this, from, to);
		}

		::System::Void RefreshQTEPoint(::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHQTEPOINT_OFFSET))(this, to);
		}

		::System::Void UpdateRecoveryMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATERECOVERYMASK_OFFSET))(this);
		}

		::System::Void UpdateQTETriggerMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEQTETRIGGERMASK_OFFSET))(this);
		}

		::System::Void UpdateMuteSwitchState(::System::Boolean forceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEMUTESWITCHSTATE_OFFSET))(this, forceUpdate);
		}

		::System::Void RefreshAidAttackState(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHAIDATTACKSTATE_OFFSET))(this, isOn);
		}

		::System::Boolean IsLocalAvatarShowPerfectSwitchEnergy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_ISLOCALAVATARSHOWPERFECTSWITCHENERGY_OFFSET))(this);
		}

		::System::Void UpdatePerfectSwitch(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_UPDATEPERFECTSWITCH_OFFSET))(this, force);
		}

		::System::Void RefreshSwitchMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_REFRESHSWITCHMATERIAL_OFFSET))(this);
		}

		::System::Void InitMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITMATERIALCACHE_OFFSET))(this);
		}

		::System::Void ClearMaterialCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_CLEARMATERIALCACHE_OFFSET))(this);
		}

		::System::Void InitDragInputSupport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_INITDRAGINPUTSUPPORT_OFFSET))(this);
		}

		::System::Boolean get_EnableDragInputInSkillButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER_GET_ENABLEDRAGINPUTINSKILLBUTTON_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__18_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__18_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_1_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__18_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__18_4(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_4_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__18_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_6_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__18_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_7_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__18_5(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__ONUIOPEN_B__18_5_OFFSET))(this, args);
		}

		::System::Void _InitDragInputSupport_b__69_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITDRAGINPUTSUPPORT_B__69_0_OFFSET))(this);
		}

		::System::Void _InitDragInputSupport_b__69_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITDRAGINPUTSUPPORT_B__69_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
