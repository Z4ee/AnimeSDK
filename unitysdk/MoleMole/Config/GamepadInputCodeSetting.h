#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"

#define MOLEMOLE_CONFIG_GAMEPADINPUTCODESETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB6DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamepadInputCodeSetting_TypeDefinitionIndex = 72049;

	class GamepadInputCodeSetting : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::LowLevel::GamepadButton GamepadButtonCode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPADINPUTCODESETTING__CTOR_OFFSET))(this);
		}
	};
}
