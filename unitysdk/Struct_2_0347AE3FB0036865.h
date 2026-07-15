#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_0347AE3FB0036865_TypeDefinitionIndex = 56412;

struct alignas(8) Struct_2_0347AE3FB0036865
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
};
