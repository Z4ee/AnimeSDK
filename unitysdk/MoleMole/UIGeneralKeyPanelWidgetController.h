#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_EE0B3EB4E953FCC3.h"
#include "unitysdk/MoleMole/DurationButtonType.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

class Class_2_79F6D62CE30E3F8E_34;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_CHECKDURATIONBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x19E82CB0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DIRTYCHECKTARGETGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x19E84370)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DOGENERALKEYSORT_OFFSET UNITYSDK_OFFSET(0x19E80B60)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DOREFRESHCOMMONVIEW_OFFSET UNITYSDK_OFFSET(0x19E83460)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETGENERALKEYPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E7F4D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETINPUTLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x19E843F0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETISNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x19E81410)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETISVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E7F2A0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETNOTIFICATIONKEY_OFFSET UNITYSDK_OFFSET(0x19E81370)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x19E7C960)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLEDEFAULTKEYINPUT_OFFSET UNITYSDK_OFFSET(0x19E81FC0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLELONGPRESSDURATIONBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x19E81B50)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLESHORTPRESSDURATIONBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x19E81A30)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_INITBINDEDTEXT_OFFSET UNITYSDK_OFFSET(0x19E810B0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ISBINDEDBUTTONACTIVE_OFFSET UNITYSDK_OFFSET(0x19E816F0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ISBINDEDBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x19E81890)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x19E7F530)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19E7E270)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19E7D6D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19E7F0A0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19E7EAB0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x19E84080)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19E7D570)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONKEYBINDINGUPDATED_OFFSET UNITYSDK_OFFSET(0x19E83CB0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLANGUAGECHANGE_OFFSET UNITYSDK_OFFSET(0x19E84250)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19E7F250)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E7E480)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONNOTIFYCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x19E813C0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19E7D500)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19E7D5D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19E7E300)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19E7C970)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19E7CA70)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x19E7DBF0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19E7F1F0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHBINDEDBUTTONACTIVE_OFFSET UNITYSDK_OFFSET(0x19E7EEB0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHDURATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x19E80190)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHGAMEPADBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x19E832C0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHHINTENABLESTATE_OFFSET UNITYSDK_OFFSET(0x19E7CDC0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYBOARDBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x19E83220)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYPANELPRIORITY_OFFSET UNITYSDK_OFFSET(0x19E83EC0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYPANELTARGETGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x19E83FB0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHLONGPRESSSTATE_OFFSET UNITYSDK_OFFSET(0x19E7FF80)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHMOUSEBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x19E83120)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHPRIORITYDISPLAY_OFFSET UNITYSDK_OFFSET(0x19E7F630)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHSPECIALGAMEPADBUTTONVIEW_OFFSET UNITYSDK_OFFSET(0x19E82AF0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHTARGETGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x19E7EC30)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0x19E7F860)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19E7E4D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHVISIBLE_OFFSET UNITYSDK_OFFSET(0x19E803B0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_RESETTEXTKEY_OFFSET UNITYSDK_OFFSET(0x19E82980)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETATTACHEDLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x19E808F0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x19E7D8C0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETEMPTYVIEW_OFFSET UNITYSDK_OFFSET(0x19E7C9E0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETFORCEHINTDISABLE_OFFSET UNITYSDK_OFFSET(0x19E82A30)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETHANDLEINPUT_1_OFFSET UNITYSDK_OFFSET(0x19E82AA0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETHANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x19E80D80)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETINPUTKEYHINTSTATE_OFFSET UNITYSDK_OFFSET(0x19E84310)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETINPUTLOGICEVENT_OFFSET UNITYSDK_OFFSET(0x19E80A90)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETLOCKSCINCN_OFFSET UNITYSDK_OFFSET(0x19E82850)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETLOGICBUTTONINPUT_OFFSET UNITYSDK_OFFSET(0x19E82790)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETNOTIFICATIONKEYSTATE_OFFSET UNITYSDK_OFFSET(0x19E842B0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETPARENTLAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x19E80210)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_TRYHANDLEKEYINPUT_OFFSET UNITYSDK_OFFSET(0x19E81550)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_UPDATELONGPRESSDURATIONBUTTONPROGRESS_OFFSET UNITYSDK_OFFSET(0x19E826D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19E84440)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x19E844C0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_1_OFFSET UNITYSDK_OFFSET(0x19E844D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_2_OFFSET UNITYSDK_OFFSET(0x19E844E0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19E844F0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19E84580)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x19E84610)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19E846A0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19E84740)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19E84750)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19E847E0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19E84870)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET UNITYSDK_OFFSET(0x19E84900)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralKeyPanelWidgetController_TypeDefinitionIndex = 43639;

	class UIGeneralKeyPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_34* _view; // 0x2C0
		::System::Single _textBgHeight; // 0x2C8
		::MoleMole::SpecialGamepadInputHintType _specialGamepadInputHint; // 0x2CC
		::System::Boolean _enableInputLogicEvent; // 0x2D0
		::MoleMole::InputLogicEventType _inputLogicEvent; // 0x2D4
		::MoleMole::LogicButtonInputType _logicButtonInput; // 0x2D8
		::Enum_3_A019F766F8C74696 _forceDisplayInputDevice; // 0x2DC
		::System::Boolean _isInitted; // 0x2E0
		::System::String* _textKey; // 0x2E8
		::System::Boolean _handleInput; // 0x2F0
		::System::UInt32 _priorityLevel; // 0x2F4
		::System::UInt32 _curRootLayerPriority; // 0x2F8
		::UnityEngine::UI::Extension::UIButtonBase* _bindedButton; // 0x300
		::System::Boolean _isRealBinded; // 0x308
		::UnityEngine::UI::Text* _bindedText; // 0x310
		::System::String* _curHintText; // 0x318
		::System::Boolean _isBindedButtonActive; // 0x320
		::System::Boolean _isFirstUpdate; // 0x321
		::System::Boolean _isEmpty; // 0x322
		::UnityEngine::UI::LayoutElement* _parentLayoutElement; // 0x328
		::System::Boolean _isSkipIgnoreLayout; // 0x330
		::UnityEngine::UI::LayoutElement* _attachedLayoutElement; // 0x338
		::System::Boolean _isSkipAttachedIgnoreLayout; // 0x340
		::System::Boolean _isHandleLongPress; // 0x341
		::System::Boolean _isButtonDown; // 0x342
		::System::Boolean _isPressed; // 0x343
		::System::Boolean _isDurationButtonInput; // 0x344
		::MoleMole::DurationButtonType _durationButtonPressType; // 0x348
		::MoleMole::LogicButtonInputType _durationButtonInputType; // 0x34C
		::System::Single _durationButtonPressTimeThreshold; // 0x350
		::System::Boolean _durationButtonLongPressSawDown; // 0x354
		::System::Boolean _isDurationButtonLongPressTriggered; // 0x355
		::System::Boolean _isCurFrameDurationButtonLongPressing; // 0x356
		::System::Boolean _isHideHint; // 0x357
		::System::Boolean _isVisible; // 0x358
		::System::Boolean _isVisibleDirty; // 0x359
		::System::Boolean _isHintEnable; // 0x35A
		::System::Boolean _isHintEnableDirty; // 0x35B
		::System::Boolean _isHintEnableByBindedButton; // 0x35C
		::System::Boolean _hideHintWhenButtonDisable; // 0x35D
		::System::Boolean _forceHintDisable; // 0x35E
		::System::Boolean _isHintEnableByTargetGamepadModule; // 0x35F
		::System::Boolean _hideHintWhenTargetModuleCheckFailed; // 0x360
		::MoleMole::GamepadNavTargetConfig _targetGamepadModuleConfig; // 0x368
		::Enum_3_EE0B3EB4E953FCC3 _targetModuleHintCheckType; // 0x378
		::MoleMole::MonoGamepadModule* _targetGamepadModule; // 0x380
		::System::Boolean _isTargetGamepadModuleDirty; // 0x388
		::Share::ENotificationBadgeType _badgeType; // 0x38C
		::System::Boolean _isNotificationKeyHint; // 0x390
		::System::String* _notificationKey; // 0x398
		::System::Boolean _isInputKeyHint; // 0x3A0
		::System::Boolean _isLockScInCn; // 0x3A1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetDefaultState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIREUSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Boolean GetIsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETISVISIBLE_OFFSET))(this);
		}

		::System::Boolean GetGeneralKeyPanelVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETGENERALKEYPANELVISIBLE_OFFSET))(this);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void SetParentLayoutElement(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETPARENTLAYOUTELEMENT_OFFSET))(this, layoutElement);
		}

		::System::Void SetAttachedLayoutElement(::UnityEngine::UI::LayoutElement* layoutElement)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutElement*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETATTACHEDLAYOUTELEMENT_OFFSET))(this, layoutElement);
		}

		::System::Void SetInputLogicEvent(::MoleMole::InputLogicEventType logicEvent, ::System::String* textKey, ::Enum_3_A019F766F8C74696 forceDisplayInputDevice, ::System::Boolean isHideHint, ::MoleMole::SpecialGamepadInputHintType specialGamepadInputHint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::System::String*, ::Enum_3_A019F766F8C74696, ::System::Boolean, ::MoleMole::SpecialGamepadInputHintType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETINPUTLOGICEVENT_OFFSET))(this, logicEvent, textKey, forceDisplayInputDevice, isHideHint, specialGamepadInputHint);
		}

		::System::Void SetHandleInput(::System::Boolean handleInput, ::System::UInt32 priorityLevel, ::MoleMole::GamepadNavTargetConfig targetGamepadModuleConfig, ::UnityEngine::UI::Extension::UIButtonBase* bindedButton, ::System::Boolean isRealBinded, ::UnityEngine::UI::Text* bindedText, ::System::Boolean isHandleLongPress, ::Enum_3_EE0B3EB4E953FCC3 targetModuleHintCheckType, ::System::Boolean hideHintWhenButtonDisable, ::System::Boolean hideHintWhenTargetModuleCheckFailed, ::Share::ENotificationBadgeType badgeType, ::System::String* notificationKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::MoleMole::GamepadNavTargetConfig, ::UnityEngine::UI::Extension::UIButtonBase*, ::System::Boolean, ::UnityEngine::UI::Text*, ::System::Boolean, ::Enum_3_EE0B3EB4E953FCC3, ::System::Boolean, ::System::Boolean, ::Share::ENotificationBadgeType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETHANDLEINPUT_OFFSET))(this, handleInput, priorityLevel, targetGamepadModuleConfig, bindedButton, isRealBinded, bindedText, isHandleLongPress, targetModuleHintCheckType, hideHintWhenButtonDisable, hideHintWhenTargetModuleCheckFailed, badgeType, notificationKey);
		}

		::System::String* GetNotificationKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETNOTIFICATIONKEY_OFFSET))(this);
		}

		::System::Void DoGeneralKeySort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DOGENERALKEYSORT_OFFSET))(this);
		}

		::System::Void OnNotifyChangeHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONNOTIFYCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Boolean GetIsNotification()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETISNOTIFICATION_OFFSET))(this);
		}

		::System::Boolean TryHandleKeyInput(::MoleMole::InputActionEvent inputAction, ::System::UInt32 curPriority)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_TRYHANDLEKEYINPUT_OFFSET))(this, inputAction, curPriority);
		}

		::System::Boolean HandleShortPressDurationButtonInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLESHORTPRESSDURATIONBUTTONINPUT_OFFSET))(this, inputAction);
		}

		::System::Boolean HandleLongPressDurationButtonInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLELONGPRESSDURATIONBUTTONINPUT_OFFSET))(this, inputAction);
		}

		::System::Void RefreshDurationButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHDURATIONBUTTON_OFFSET))(this);
		}

		::System::Void UpdateLongPressDurationButtonProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_UPDATELONGPRESSDURATIONBUTTONPROGRESS_OFFSET))(this, progress);
		}

		::System::Boolean HandleDefaultKeyInput(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_HANDLEDEFAULTKEYINPUT_OFFSET))(this, inputAction);
		}

		::System::Void SetLogicButtonInput(::MoleMole::LogicButtonInputType inputType, ::Enum_3_A019F766F8C74696 forceDisplayInputDevice, ::System::String* textKey, ::MoleMole::SpecialGamepadInputHintType specialGamepadInputHint, ::System::UInt32 priorityLevel)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LogicButtonInputType, ::Enum_3_A019F766F8C74696, ::System::String*, ::MoleMole::SpecialGamepadInputHintType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETLOGICBUTTONINPUT_OFFSET))(this, inputType, forceDisplayInputDevice, textKey, specialGamepadInputHint, priorityLevel);
		}

		::System::Void SetLockScInCN(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETLOCKSCINCN_OFFSET))(this, value);
		}

		::System::Void ResetTextKey(::System::String* key, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_RESETTEXTKEY_OFFSET))(this, key, force);
		}

		::System::Void SetForceHintDisable(::System::Boolean forceHintDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETFORCEHINTDISABLE_OFFSET))(this, forceHintDisable);
		}

		::System::Void SetHandleInput_1(::System::Boolean handleInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETHANDLEINPUT_1_OFFSET))(this, handleInput);
		}

		::System::Void RefreshPriorityDisplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHPRIORITYDISPLAY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CheckDurationButtonView(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_CHECKDURATIONBUTTONVIEW_OFFSET))(this, inputAction);
		}

		::System::Void RefreshKeyboardButtonView(::UnityEngine::InputSystem::Key keycode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Key))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYBOARDBUTTONVIEW_OFFSET))(this, keycode);
		}

		::System::Void RefreshGamepadButtonView(::UnityEngine::InputSystem::LowLevel::GamepadButton keycode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::GamepadButton))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHGAMEPADBUTTONVIEW_OFFSET))(this, keycode);
		}

		::System::Void RefreshSpecialGamepadButtonView(::MoleMole::SpecialGamepadInputHintType hintType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SpecialGamepadInputHintType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHSPECIALGAMEPADBUTTONVIEW_OFFSET))(this, hintType);
		}

		::System::Void RefreshMouseButtonView(::UnityEngine::InputSystem::LowLevel::MouseButton keycode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::MouseButton))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHMOUSEBUTTONVIEW_OFFSET))(this, keycode);
		}

		::System::Void DoRefreshCommonView(::System::String* keyCodeString, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DOREFRESHCOMMONVIEW_OFFSET))(this, keyCodeString, iconPath);
		}

		::System::Void SetEmptyView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETEMPTYVIEW_OFFSET))(this);
		}

		::System::Void InitBindedText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_INITBINDEDTEXT_OFFSET))(this);
		}

		::System::Void RefreshText(::System::Boolean force, ::System::Boolean byLanguageChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHTEXT_OFFSET))(this, force, byLanguageChange);
		}

		::System::Void OnKeyBindingUpdated(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONKEYBINDINGUPDATED_OFFSET))(this, args);
		}

		::System::Void RefreshKeyPanelPriority(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYPANELPRIORITY_OFFSET))(this, args);
		}

		::System::Void RefreshKeyPanelTargetGamepadModule(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHKEYPANELTARGETGAMEPADMODULE_OFFSET))(this, args);
		}

		::System::Void OnGamepadModuleFocus(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, args);
		}

		::System::Void OnLanguageChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ONLANGUAGECHANGE_OFFSET))(this, args);
		}

		::System::Void RefreshBindedButtonActive(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHBINDEDBUTTONACTIVE_OFFSET))(this, force);
		}

		::System::Void SetNotificationKeyState(::System::Boolean isHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETNOTIFICATIONKEYSTATE_OFFSET))(this, isHint);
		}

		::System::Void SetInputKeyHintState(::System::Boolean isHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_SETINPUTKEYHINTSTATE_OFFSET))(this, isHint);
		}

		::System::Void RefreshHintEnableState(::System::Boolean forceEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHHINTENABLESTATE_OFFSET))(this, forceEnable);
		}

		::System::Void RefreshVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHVISIBLE_OFFSET))(this);
		}

		::System::Void RefreshLongPressState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHLONGPRESSSTATE_OFFSET))(this);
		}

		::System::Boolean IsBindedButtonActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ISBINDEDBUTTONACTIVE_OFFSET))(this);
		}

		::System::Boolean IsBindedButtonEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_ISBINDEDBUTTONENABLE_OFFSET))(this);
		}

		::System::Void DirtyCheckTargetGamepadModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_DIRTYCHECKTARGETGAMEPADMODULE_OFFSET))(this);
		}

		::System::Void RefreshTargetGamepadModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_REFRESHTARGETGAMEPADMODULE_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType GetInputLogicEvent()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER_GETINPUTLOGICEVENT_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__4_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__4_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_1_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__4_2(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER__ONUIOPEN_B__4_2_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIReuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETCONTROLLER___BASE_ONUIREUSE_OFFSET))(this);
		}
	};
}
