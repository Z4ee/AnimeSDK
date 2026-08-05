#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CHARACTERAIMANIMCONFIG_MAKEDEFAULT_OFFSET UNITYSDK_OFFSET(0x17298F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimAnimConfig_TypeDefinitionIndex = 69871;

	struct alignas(4) CharacterAimAnimConfig
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 pitchPivot; // 0x1C
		::UnityEngine::Vector2 minMaxDirOffset; // 0x28
		::UnityEngine::Vector2 minMaxPitch; // 0x30

		static ::MoleMole::Config::CharacterAimAnimConfig MakeDefault()
		{
			return ((::MoleMole::Config::CharacterAimAnimConfig(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERAIMANIMCONFIG_MAKEDEFAULT_OFFSET))();
		}
	};
}
