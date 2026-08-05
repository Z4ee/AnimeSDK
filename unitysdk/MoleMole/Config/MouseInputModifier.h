#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_MOUSEINPUTMODIFIER_MAKEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A942810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MouseInputModifier_TypeDefinitionIndex = 68645;

	struct alignas(4) MouseInputModifier
	{
		::UnityEngine::Vector2 sensitivity; // 0x10
		::System::Single maxSpeed; // 0x18

		static ::MoleMole::Config::MouseInputModifier MakeDefault()
		{
			return ((::MoleMole::Config::MouseInputModifier(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOUSEINPUTMODIFIER_MAKEDEFAULT_OFFSET))();
		}
	};
}
