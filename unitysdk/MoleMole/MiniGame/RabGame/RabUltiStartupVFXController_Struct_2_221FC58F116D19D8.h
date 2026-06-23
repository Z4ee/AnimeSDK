#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }

namespace MoleMole::MiniGame::RabGame
{
	inline static constexpr unsigned int RabUltiStartupVFXController_Struct_2_221FC58F116D19D8_TypeDefinitionIndex = 54051;

	struct alignas(8) RabUltiStartupVFXController_Struct_2_221FC58F116D19D8
	{
		::MoleMole::Battle::Entity* Field_2_0; // 0x10
		::UnityEngine::Vector3 Field_2_1; // 0x18
		::UnityEngine::Vector3 Field_2_2; // 0x24
		::System::Single Field_2_3; // 0x30
	};
}
