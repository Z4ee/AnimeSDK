#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace SRDebugger::UI::Controls { class PinEntryControlCallback; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ADD_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E680270)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E692890)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_CANCELBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1E692FC0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E6800B0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_HANDLECHARACTER_OFFSET UNITYSDK_OFFSET(0x1E692D10)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_HIDE_OFFSET UNITYSDK_OFFSET(0x1E680220)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x1E692F80)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1E692F00)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E692BC0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E692BB0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_PLAYINVALIDCODEANIMATION_OFFSET UNITYSDK_OFFSET(0x1E680430)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_PUSHNUMBER_OFFSET UNITYSDK_OFFSET(0x1E692D80)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x1E692A40)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_REMOVE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E692810)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_SHOW_OFFSET UNITYSDK_OFFSET(0x1E6800E0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E692BD0)
#define SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E693020)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int PinEntryControl_TypeDefinitionIndex = 37335;

	class PinEntryControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Boolean _isVisible; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* _numbers; // 0x50
		::UnityEngine::UI::Image* Background; // 0x58
		::System::Boolean CanCancel; // 0x60
		::UnityEngine::UI::Button* CancelButton; // 0x68
		::UnityEngine::UI::Text* CancelButtonText; // 0x70
		::UnityEngine::CanvasGroup* CanvasGroup; // 0x78
		::UnityEngine::Animator* DotAnimator; // 0x80
		::Il2CppArray<::UnityEngine::UI::Button*>* NumberButtons; // 0x88
		::Il2CppArray<::UnityEngine::UI::Toggle*>* NumberDots; // 0x90
		::UnityEngine::UI::Text* PromptText; // 0x98
		::SRDebugger::UI::Controls::PinEntryControlCallback* Complete; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void add_Complete(::SRDebugger::UI::Controls::PinEntryControlCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Controls::PinEntryControlCallback*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ADD_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_Complete(::SRDebugger::UI::Controls::PinEntryControlCallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::UI::Controls::PinEntryControlCallback*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_REMOVE_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void HandleCharacter(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_HANDLECHARACTER_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_HIDE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_CLEAR_OFFSET))(this);
		}

		::System::Void PlayInvalidCodeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_PLAYINVALIDCODEANIMATION_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_ONCANCEL_OFFSET))(this);
		}

		::System::Void CancelButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_CANCELBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void PushNumber(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_PUSHNUMBER_OFFSET))(this, a1);
		}

		::System::Void RefreshState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PINENTRYCONTROL_REFRESHSTATE_OFFSET))(this);
		}
	};
}
