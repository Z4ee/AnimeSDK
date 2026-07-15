#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_7DAF438717237C6B_TypeDefinitionIndex = 51760;

struct alignas(8) Struct_2_7DAF438717237C6B
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::IVec2 Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
};
