#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/UI/Controls/OptionsControlBase.h"

namespace SRF::Helpers { class MethodReference; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_BUTTONONCLICK_OFFSET UNITYSDK_OFFSET(0x1844D850)
#define SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1844D7B0)
#define SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x18433D20)
#define SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_START_OFFSET UNITYSDK_OFFSET(0x1844D7C0)
#define SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1844DAE0)

namespace SRDebugger::UI::Controls::Data
{
	inline static constexpr unsigned int ActionControl_TypeDefinitionIndex = 29687;

	class ActionControl : public ::SRDebugger::UI::Controls::OptionsControlBase
	{
	public:
		::SRF::Helpers::MethodReference* _method; // 0x78
		::UnityEngine::UI::Button* Button; // 0x80
		::UnityEngine::UI::Text* Title; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL__CTOR_OFFSET))(this);
		}

		::SRF::Helpers::MethodReference* get_Method()
		{
			return ((::SRF::Helpers::MethodReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_GET_METHOD_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_START_OFFSET))(this);
		}

		::System::Void ButtonOnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_BUTTONONCLICK_OFFSET))(this);
		}

		::System::Void SetMethod(::System::String* methodName, ::SRF::Helpers::MethodReference* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SRF::Helpers::MethodReference*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_DATA_ACTIONCONTROL_SETMETHOD_OFFSET))(this, methodName, method);
		}
	};
}
