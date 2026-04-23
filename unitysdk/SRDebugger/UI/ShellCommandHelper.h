#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }

#define SRDEBUGGER_UI_SHELLCOMMANDHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB931AC0)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int ShellCommandHelper_TypeDefinitionIndex = 44479;

	class ShellCommandHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::InputField* ShellCommandField; // 0x18
		::UnityEngine::UI::Button* ConfirmBtn; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_SHELLCOMMANDHELPER__CTOR_OFFSET))(this);
		}
	};
}
