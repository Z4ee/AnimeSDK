#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterDamageDecalType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageDecalData_TypeDefinitionIndex = 66527;

	struct alignas(4) DamageDecalData
	{
		::MoleMole::Config::CharacterDamageDecalType DecalType; // 0x10
		::System::Boolean IsOverrideLifetime; // 0x14
		::System::Single OverrideLifetime; // 0x18
		::System::Boolean IsOverrideColor; // 0x1C
		::UnityEngine::Color OverrideColor; // 0x20
	};
}
