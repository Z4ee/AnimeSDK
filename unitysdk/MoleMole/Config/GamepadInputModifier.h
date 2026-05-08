#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AxisMappingType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_GAMEPADINPUTMODIFIER_MAKEDEFAULT_OFFSET UNITYSDK_OFFSET(0x14251130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GamepadInputModifier_TypeDefinitionIndex = 56374;

	struct alignas(8) GamepadInputModifier
	{
		::UnityEngine::Vector2 sensitivity; // 0x10
		::System::String* mappingCurve; // 0x18
		::MoleMole::Config::AxisMappingType mappingType; // 0x20
		::System::Single speed; // 0x24
		::System::Single accTime; // 0x28

		static ::MoleMole::Config::GamepadInputModifier MakeDefault()
		{
			return ((::MoleMole::Config::GamepadInputModifier(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPADINPUTMODIFIER_MAKEDEFAULT_OFFSET))();
		}
	};
}
