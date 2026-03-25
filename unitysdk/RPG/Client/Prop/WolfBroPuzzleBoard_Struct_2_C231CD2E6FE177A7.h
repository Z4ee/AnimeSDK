#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace RPG::GameCore { class GameEntity; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7_TypeDefinitionIndex = 64140;

	struct alignas(8) WolfBroPuzzleBoard_Struct_2_C231CD2E6FE177A7
	{
		::UnityEngine::Vector3Int Field_2_0; // 0x10
		::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	};
}
