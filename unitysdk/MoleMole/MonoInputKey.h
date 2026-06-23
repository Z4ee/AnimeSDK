#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EE0B3EB4E953FCC3.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System { class String; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_MONOINPUTKEY_CLEARGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x173E55D0)
#define MOLEMOLE_MONOINPUTKEY_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x173E5620)
#define MOLEMOLE_MONOINPUTKEY_FORCECREATEGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x173E5870)
#define MOLEMOLE_MONOINPUTKEY_GETGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x173E50C0)
#define MOLEMOLE_MONOINPUTKEY_GET_BINDEDBUTTON_OFFSET UNITYSDK_OFFSET(0x173E3C70)
#define MOLEMOLE_MONOINPUTKEY_GET_BINDEDTEXT_OFFSET UNITYSDK_OFFSET(0x173E3C90)
#define MOLEMOLE_MONOINPUTKEY_GET_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x173E3C30)
#define MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENBUTTONDISABLE_OFFSET UNITYSDK_OFFSET(0x173E3C80)
#define MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENCANNOTNAVIGATETO_OFFSET UNITYSDK_OFFSET(0x173E3CE0)
#define MOLEMOLE_MONOINPUTKEY_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x173E3C10)
#define MOLEMOLE_MONOINPUTKEY_GET_ISHANDLELONGPRESS_OFFSET UNITYSDK_OFFSET(0x173E3CA0)
#define MOLEMOLE_MONOINPUTKEY_GET_ISHIDEHINT_OFFSET UNITYSDK_OFFSET(0x173E3CB0)
#define MOLEMOLE_MONOINPUTKEY_GET_LOGICEVENT_OFFSET UNITYSDK_OFFSET(0x173E3C60)
#define MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONBADGETYPE_OFFSET UNITYSDK_OFFSET(0x173E3CC0)
#define MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONKEY_OFFSET UNITYSDK_OFFSET(0x173E3CD0)
#define MOLEMOLE_MONOINPUTKEY_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x173E3C40)
#define MOLEMOLE_MONOINPUTKEY_GET_SPECIALGAMEPADINPUTHINT_OFFSET UNITYSDK_OFFSET(0x173E3C50)
#define MOLEMOLE_MONOINPUTKEY_INITGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x173E5570)
#define MOLEMOLE_MONOINPUTKEY_INIT_OFFSET UNITYSDK_OFFSET(0x173E4A80)
#define MOLEMOLE_MONOINPUTKEY_ISCONFIGEMPTY_OFFSET UNITYSDK_OFFSET(0x173E4A20)
#define MOLEMOLE_MONOINPUTKEY_ISWORKABLE_OFFSET UNITYSDK_OFFSET(0x173E48F0)
#define MOLEMOLE_MONOINPUTKEY_METHOD_5_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x173E5170)
#define MOLEMOLE_MONOINPUTKEY_METHOD_5_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x173E53A0)
#define MOLEMOLE_MONOINPUTKEY_METHOD_5_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x173E3D40)
#define MOLEMOLE_MONOINPUTKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173E3CF0)
#define MOLEMOLE_MONOINPUTKEY_RESETLAYOUTELEMENTIGNORE_OFFSET UNITYSDK_OFFSET(0x173E4D80)
#define MOLEMOLE_MONOINPUTKEY_RESETLOGINEVENTANDTEXT_OFFSET UNITYSDK_OFFSET(0x173E58C0)
#define MOLEMOLE_MONOINPUTKEY_RESETTEXTKEY_OFFSET UNITYSDK_OFFSET(0x173E5670)
#define MOLEMOLE_MONOINPUTKEY_SETGENERALKEYHINTSTATE_OFFSET UNITYSDK_OFFSET(0x173E5340)
#define MOLEMOLE_MONOINPUTKEY_SETGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x173E5070)
#define MOLEMOLE_MONOINPUTKEY_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x173E5110)
#define MOLEMOLE_MONOINPUTKEY_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x173E3C20)
#define MOLEMOLE_MONOINPUTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x173E5B00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInputKey_TypeDefinitionIndex = 72595;

	class MonoInputKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 _priorityLevel; // 0x18
		::MoleMole::SpecialGamepadInputHintType _specialGamepadInputHint; // 0x1C
		::MoleMole::InputLogicEventType _logicEvent; // 0x20
		::UnityEngine::UI::Text* _bindedText; // 0x28
		::System::String* textKey; // 0x30
		::System::Boolean _handleInput; // 0x38
		::UnityEngine::UI::Extension::UIButtonEx* _bindedButton; // 0x40
		::System::Boolean _hideHintWhenButtonDisable; // 0x48
		::System::Boolean _isHandleLongPress; // 0x49
		::System::Boolean _isHideHint; // 0x4A
		::Share::ENotificationBadgeType _notificationBadgeType; // 0x4C
		::System::String* _notificationKey; // 0x50
		::System::Boolean isLockScInCn; // 0x58
		::MoleMole::GamepadNavTargetConfig CanNavigateToModuleConfig; // 0x60
		::Enum_3_EE0B3EB4E953FCC3 TargetModuleHintCheckType; // 0x70
		::System::Boolean _hideHintWhenCanNotNavigateTo; // 0x74
		::UnityEngine::UI::LayoutElement* AttachedLayoutElement; // 0x78
		::System::Boolean WorkOnAllLayoutPlatform; // 0x80
		::System::Boolean Field_5_18; // 0x81
		::System::Boolean Field_5_19; // 0x82
		::System::Boolean Field_5_20; // 0x83
		::System::Boolean Field_5_21; // 0x84
		::MoleMole::UIGeneralKeyPanelWidgetController* Field_5_22; // 0x88
		::MoleMole::UIBaseController* Field_5_23; // 0x90
		::System::Boolean Field_5_24; // 0x98
		::System::Boolean Field_5_25; // 0x99

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SET_ISCOLLECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_handleInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HANDLEINPUT_OFFSET))(this);
		}

		::System::UInt32 get_priorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::MoleMole::SpecialGamepadInputHintType get_specialGamepadInputHint()
		{
			return ((::MoleMole::SpecialGamepadInputHintType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_SPECIALGAMEPADINPUTHINT_OFFSET))(this);
		}

		::MoleMole::InputLogicEventType get_logicEvent()
		{
			return ((::MoleMole::InputLogicEventType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_LOGICEVENT_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UIButtonEx* get_bindedButton()
		{
			return ((::UnityEngine::UI::Extension::UIButtonEx*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_BINDEDBUTTON_OFFSET))(this);
		}

		::System::Boolean get_HideHintWhenButtonDisable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENBUTTONDISABLE_OFFSET))(this);
		}

		::UnityEngine::UI::Text* get_bindedText()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_BINDEDTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsHandleLongPress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISHANDLELONGPRESS_OFFSET))(this);
		}

		::System::Boolean get_IsHideHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_ISHIDEHINT_OFFSET))(this);
		}

		::Share::ENotificationBadgeType get_NotificationBadgeType()
		{
			return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONBADGETYPE_OFFSET))(this);
		}

		::System::String* get_NotificationKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_NOTIFICATIONKEY_OFFSET))(this);
		}

		::System::Boolean get_HideHintWhenCanNotNavigateTo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GET_HIDEHINTWHENCANNOTNAVIGATETO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ISWORKABLE_OFFSET))(this);
		}

		::System::Boolean IsConfigEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_ISCONFIGEMPTY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_INIT_OFFSET))(this);
		}

		::System::Void ResetLayoutElementIgnore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETLAYOUTELEMENTIGNORE_OFFSET))(this);
		}

		::System::Void SetGeneralKeyPanel(::MoleMole::UIGeneralKeyPanelWidgetController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralKeyPanelWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETGENERALKEYPANEL_OFFSET))(this, a1);
		}

		::MoleMole::UIGeneralKeyPanelWidgetController* GetGeneralKeyPanel()
		{
			return ((::MoleMole::UIGeneralKeyPanelWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_GETGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetGeneralKeyHintState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_SETGENERALKEYHINTSTATE_OFFSET))(this, a1);
		}

		::System::Void InitGeneralKeyPanel(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_INITGENERALKEYPANEL_OFFSET))(this, a1);
		}

		::System::Void ClearGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_CLEARGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void ResetTextKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETTEXTKEY_OFFSET))(this, a1);
		}

		::System::Void ForceCreateGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_FORCECREATEGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void ResetLoginEventAndText(::MoleMole::InputLogicEventType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_RESETLOGINEVENTANDTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A56385E6706FA723()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_METHOD_5_A56385E6706FA723_OFFSET))(this);
		}

		::System::Void Method_5_D545E2F706415F81()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_METHOD_5_D545E2F706415F81_OFFSET))(this);
		}

		::System::Void Method_5_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINPUTKEY_METHOD_5_4EA6B1791DACA9CC_OFFSET))(this);
		}
	};
}
