#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Settings_ShortcutActions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define SRDEBUGGER_SETTINGS_KEYBOARDSHORTCUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1844B830)

namespace SRDebugger
{
	inline static constexpr unsigned int Settings_KeyboardShortcut_TypeDefinitionIndex = 29624;

	class Settings_KeyboardShortcut : public ::System::Object
	{
	public:
		::SRDebugger::Settings_ShortcutActions Action; // 0x10
		::System::Boolean Alt; // 0x14
		::System::Boolean Control; // 0x15
		::UnityEngine::KeyCode Key; // 0x18
		::System::Boolean Shift; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_KEYBOARDSHORTCUT__CTOR_OFFSET))(this);
		}
	};
}
