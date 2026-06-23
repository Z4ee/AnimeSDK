#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_DROPDOWNINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x90DF20)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateVerificationDialog_DropDownInteraction_TypeDefinitionIndex = 20793;

	struct alignas(8) ConsoleAgeGateVerificationDialog_DropDownInteraction
	{
		::UnityEngine::UI::Dropdown* dropdown; // 0x10
		::UnityEngine::UI::Text* label; // 0x18
		::System::Boolean isInteracted; // 0x20
		::System::Int32 value; // 0x24

		::System::Void _ctor(::System::Boolean isInteracted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_DROPDOWNINTERACTION__CTOR_OFFSET))(this, isInteracted);
		}
	};
}
