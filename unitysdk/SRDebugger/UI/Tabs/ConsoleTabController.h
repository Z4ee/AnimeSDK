#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Tabs/ConsoleTabController_CopyToClipboardStates.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::Services { class ConsoleEntry; }
namespace SRDebugger::Services { class IConsoleService; }
namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::UI::Controls { class ConsoleLogControl; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDC9AC0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CONSOLELOGSELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC95D0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CONSOLEONUPDATED_OFFSET UNITYSDK_OFFSET(0x1BDC9AB0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_COPYTOCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x1BDC9900)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FADECOPYBUTTON_OFFSET UNITYSDK_OFFSET(0x1BDC9A50)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FILTERTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC8EA0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FILTERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC8F80)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGGINGDISABLECLOSEANDIGNOREPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDC9B60)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGGINGDISABLEREENABLEPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDC9B90)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGHANDLERHASBEENOVERRIDENOKAYBUTTONPRESS_OFFSET UNITYSDK_OFFSET(0x1BDC9B30)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BDC9310)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BDC9510)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDC9500)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC9040)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_PINTOGGLEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BDC91F0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_POPULATESTACKTRACEAREA_OFFSET UNITYSDK_OFFSET(0x1BDC8500)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BDC8850)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_SETCOPYTOCLIPBOARDBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1BDC9630)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1BDC7EF0)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_STOPANIMATIONS_OFFSET UNITYSDK_OFFSET(0x1BDC9130)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDC9620)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC9D30)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BDC9D40)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_1_OFFSET UNITYSDK_OFFSET(0x1BDC9D50)
#define SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_2_OFFSET UNITYSDK_OFFSET(0x1BDC9D60)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int ConsoleTabController_TypeDefinitionIndex = 37293;

	class ConsoleTabController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		static ::System::Boolean* StaticGet__hasWarnedAboutLoggingDisabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleTabController_TypeDefinitionIndex)->GetStaticField(0xFF50);
		}
		static ::System::Boolean* StaticGet__hasWarnedAboutLogHandler()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ConsoleTabController_TypeDefinitionIndex)->GetStaticField(0xFF51);
		}
		// static const ::System::Int32 MaxLength = 0xA28; // 0x0
		::UnityEngine::Canvas* _consoleCanvas; // 0x48
		::System::Boolean _isDirty; // 0x50
		::SRDebugger::UI::Controls::ConsoleLogControl* ConsoleLogControl; // 0x58
		::UnityEngine::UI::Toggle* PinToggle; // 0x60
		::UnityEngine::UI::ScrollRect* StackTraceScrollRect; // 0x68
		::UnityEngine::UI::Text* StackTraceText; // 0x70
		::UnityEngine::UI::Toggle* ToggleErrors; // 0x78
		::UnityEngine::UI::Text* ToggleErrorsText; // 0x80
		::UnityEngine::UI::Toggle* ToggleInfo; // 0x88
		::UnityEngine::UI::Text* ToggleInfoText; // 0x90
		::UnityEngine::UI::Toggle* ToggleWarnings; // 0x98
		::UnityEngine::UI::Text* ToggleWarningsText; // 0xA0
		::UnityEngine::GameObject* CopyToClipboardContainer; // 0xA8
		::UnityEngine::GameObject* CopyToClipboardButton; // 0xB0
		::UnityEngine::GameObject* CopyToClipboardMessage; // 0xB8
		::UnityEngine::CanvasGroup* CopyToClipboardMessageCanvasGroup; // 0xC0
		::UnityEngine::GameObject* LoggingIsDisabledCanvasGroup; // 0xC8
		::UnityEngine::GameObject* LogHandlerHasBeenOverridenGroup; // 0xD0
		::UnityEngine::UI::Toggle* FilterToggle; // 0xD8
		::UnityEngine::UI::InputField* FilterField; // 0xE0
		::UnityEngine::GameObject* FilterBarContainer; // 0xE8
		::SRDebugger::Services::ConsoleEntry* _selectedItem; // 0xF0
		::UnityEngine::Coroutine* _fadeButtonCoroutine; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_START_OFFSET))(this);
		}

		::System::Void FilterToggleValueChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FILTERTOGGLEVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void FilterValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FILTERVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void PanelOnVisibilityChanged(::SRDebugger::Services::IDebugPanelService* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IDebugPanelService*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_PANELONVISIBILITYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void PinToggleValueChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_PINTOGGLEVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void ConsoleLogSelectedItemChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CONSOLELOGSELECTEDITEMCHANGED_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void PopulateStackTraceArea(::SRDebugger::Services::ConsoleEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::ConsoleEntry*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_POPULATESTACKTRACEAREA_OFFSET))(this, a1);
		}

		::System::Void CopyToClipboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_COPYTOCLIPBOARD_OFFSET))(this);
		}

		::System::Void SetCopyToClipboardButtonState(::SRDebugger::UI::Tabs::ConsoleTabController_CopyToClipboardStates a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Tabs::ConsoleTabController_CopyToClipboardStates))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_SETCOPYTOCLIPBOARDBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* FadeCopyButton()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_FADECOPYBUTTON_OFFSET))(this);
		}

		::System::Void StopAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_STOPANIMATIONS_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void ConsoleOnUpdated(::SRDebugger::Services::IConsoleService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CONSOLEONUPDATED_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_CLEAR_OFFSET))(this);
		}

		::System::Void LogHandlerHasBeenOverridenOkayButtonPress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGHANDLERHASBEENOVERRIDENOKAYBUTTONPRESS_OFFSET))(this);
		}

		::System::Void LoggingDisableCloseAndIgnorePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGGINGDISABLECLOSEANDIGNOREPRESSED_OFFSET))(this);
		}

		::System::Void LoggingDisableReenablePressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER_LOGGINGDISABLEREENABLEPRESSED_OFFSET))(this);
		}

		::System::Void _Start_b__26_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _Start_b__26_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_1_OFFSET))(this, a1);
		}

		::System::Void _Start_b__26_2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_CONSOLETABCONTROLLER__START_B__26_2_OFFSET))(this, a1);
		}
	};
}
