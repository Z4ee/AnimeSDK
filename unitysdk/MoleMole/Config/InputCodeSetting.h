#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamepadInputCodeSetting; }
namespace MoleMole::Config { class KeyboardInputCodeSetting; }
namespace MoleMole::Config { class MouseInputCodeSetting; }

#define MOLEMOLE_CONFIG_INPUTCODESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0741A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputCodeSetting_TypeDefinitionIndex = 57585;

	class InputCodeSetting : public ::System::Object
	{
	public:
		::MoleMole::Config::MouseInputCodeSetting* MouseInputSetting; // 0x10
		::MoleMole::Config::GamepadInputCodeSetting* GamepadInputSetting; // 0x18
		::MoleMole::Config::KeyboardInputCodeSetting* KeyboardInputSetting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INPUTCODESETTING__CTOR_OFFSET))(this);
		}
	};
}
