#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int Struct_2_696504DF8F5DDF76_TypeDefinitionIndex = 55149;

struct alignas(8) Struct_2_696504DF8F5DDF76
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::AliveState Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x20
	::RPG::GameCore::FixPoint Field_2_3; // 0x28
};
