#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_087E0883E6EFDD1C.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1EA8435E138F2E03;
class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ADDCLICKLISTENER_OFFSET UNITYSDK_OFFSET(0x172EEEC0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x172EF520)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_CLEARNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x172EF570)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x172EE970)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_HIDETIPIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x172EE750)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITGENERALCONSOLEBTNBASE_OFFSET UNITYSDK_OFFSET(0x172EEE00)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITSETBTNENTITY_OFFSET UNITYSDK_OFFSET(0x172EEE70)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x172EEB70)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_PLAYHIDETIP_OFFSET UNITYSDK_OFFSET(0x172EE8C0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETACTIVE_OFFSET UNITYSDK_OFFSET(0x172EF470)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETFOCUS_OFFSET UNITYSDK_OFFSET(0x172EF3B0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x172EF300)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETCONSOLESTYLE_OFFSET UNITYSDK_OFFSET(0x172EF070)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETSORTORDER_OFFSET UNITYSDK_OFFSET(0x172EF360)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPSIMPLETEXTKEY_OFFSET UNITYSDK_OFFSET(0x172EE4A0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPTEXTKEY_OFFSET UNITYSDK_OFFSET(0x172EE150)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x172EE980)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SWITCHCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x172EEBE0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x172EF5B0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x172EF610)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConsoleBaseBtnWidgetController_TypeDefinitionIndex = 90350;

	class UIGeneralConsoleBaseBtnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::RectTransform* tipRoot; // 0x2C0
		::UnityEngine::UI::Extension::UILocalizationText* tipInfoText; // 0x2C8
		::UnityEngine::UI::Extension::UILocalizationText* tipNum; // 0x2D0
		::Class_2_1A39E1B51756BF41* tipIcon; // 0x2D8
		::Class_2_1A39E1B51756BF41* tipXImage; // 0x2E0
		::Class_2_FDFE69FE7B72463B* TipAnimation; // 0x2E8
		::MoleMole::UIBaseController* uiController; // 0x2F0
		::MoleMole::UIGeneralButtonController* ButtonEntity; // 0x2F8
		::MoleMole::MonoGamepadModule* ConsoleModule; // 0x300
		::MoleMole::MonoInputKey* ConsoleInputKey; // 0x308
		::Class_2_B4378B46E0020E85* ConsoleBtn; // 0x310
		::Enum_3_087E0883E6EFDD1C styleEnum; // 0x318
		::MoleMole::GamepadHintKeyConfig hintStruct; // 0x320
		::MoleMole::InputLogicEventType logicEventType; // 0x380
		::System::Boolean isModuleFocus; // 0x384
		::System::Int32 sortOrder; // 0x388
		::System::Boolean _interactable; // 0x38C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetTipTextKey(::System::String* textKey, ::System::String* numKey, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPTEXTKEY_OFFSET))(this, textKey, numKey, iconPath);
		}

		::System::Void SetTipSimpleTextKey(::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETTIPSIMPLETEXTKEY_OFFSET))(this, textKey);
		}

		::System::Void HideTipImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_HIDETIPIMMEDIATE_OFFSET))(this);
		}

		::System::Void PlayHideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_PLAYHIDETIP_OFFSET))(this);
		}

		::System::Boolean get_interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void InitGeneralConsoleBtnBase(::MoleMole::MonoGamepadModule* ConsoleModule, ::MoleMole::MonoInputKey* ConsoleInputKey, ::Class_2_B4378B46E0020E85* ConsoleBtn)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoInputKey*, ::Class_2_B4378B46E0020E85*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITGENERALCONSOLEBTNBASE_OFFSET))(this, ConsoleModule, ConsoleInputKey, ConsoleBtn);
		}

		::System::Void InitSetBtnEntity(::MoleMole::UIGeneralButtonController* GuideGoBtn)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_INITSETBTNENTITY_OFFSET))(this, GuideGoBtn);
		}

		::System::Void AddClickListener(::UnityEngine::Events::UnityAction* clickAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_ADDCLICKLISTENER_OFFSET))(this, clickAction);
		}

		::System::Void SetConsoleStyle(::MoleMole::InputLogicEventType logicEvent, ::Enum_3_087E0883E6EFDD1C styleEnum, ::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::Enum_3_087E0883E6EFDD1C, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETCONSOLESTYLE_OFFSET))(this, logicEvent, styleEnum, textKey);
		}

		::System::Void SwitchConsoleActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SWITCHCONSOLEACTIVE_OFFSET))(this);
		}

		::System::Void SetButtonText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBUTTONTEXT_OFFSET))(this, text);
		}

		::System::Void SetSortOrder(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETSORTORDER_OFFSET))(this, order);
		}

		::System::Void SetBtnWidgetFocus(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETFOCUS_OFFSET))(this, isFocus);
		}

		::System::Void SetBtnWidgetActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_SETBTNWIDGETACTIVE_OFFSET))(this, isActive);
		}

		::System::Void BindNotificationNode(::Class_1_1EA8435E138F2E03* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1EA8435E138F2E03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this, notificationNode);
		}

		::System::Void ClearNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER_CLEARNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}
	};
}
