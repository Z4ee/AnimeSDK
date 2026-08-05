#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

namespace MoleMole::MiniGame::RabGame
{
	inline static constexpr unsigned int RabUltiStartupVFXController_Struct_2_A6FB625596F1BDCD_TypeDefinitionIndex = 62415;

	struct alignas(8) RabUltiStartupVFXController_Struct_2_A6FB625596F1BDCD
	{
		::MoleMole::Battle::Entity* Field_2_2; // 0x10
		::System::Single Field_2_1; // 0x18
		::UnityEngine::Vector3 Field_2_0; // 0x1C
		::MoleMole::Battle::Entity* Field_2_7; // 0x28
		::UnityEngine::GameObject* Field_2_6; // 0x30
	};
}
