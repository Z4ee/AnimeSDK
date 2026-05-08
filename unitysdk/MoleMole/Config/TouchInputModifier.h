#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_TOUCHINPUTMODIFIER_MAKEDEFAULT_OFFSET UNITYSDK_OFFSET(0x17D30790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TouchInputModifier_TypeDefinitionIndex = 77798;

	struct alignas(4) TouchInputModifier
	{
		::UnityEngine::Vector2 sensitivity; // 0x10
		::System::Single maxSpeed; // 0x18

		static ::MoleMole::Config::TouchInputModifier MakeDefault()
		{
			return ((::MoleMole::Config::TouchInputModifier(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TOUCHINPUTMODIFIER_MAKEDEFAULT_OFFSET))();
		}
	};
}
