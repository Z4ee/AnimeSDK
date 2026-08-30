#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Button.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define SRDEBUGGER_UI_CONTROLS_MULTITAPBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1E692350)
#define SRDEBUGGER_UI_CONTROLS_MULTITAPBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6923C0)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int MultiTapButton_TypeDefinitionIndex = 37333;

	class MultiTapButton : public ::UnityEngine::UI::Button
	{
	public:
		::System::Single _lastTap; // 0x110
		::System::Int32 _tapCount; // 0x114
		::System::Int32 RequiredTapCount; // 0x118
		::System::Single ResetTime; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_MULTITAPBUTTON__CTOR_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_MULTITAPBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}
	};
}
