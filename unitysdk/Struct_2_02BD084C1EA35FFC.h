#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierInfectType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_02BD084C1EA35FFC_TypeDefinitionIndex = 51975;

struct alignas(8) Struct_2_02BD084C1EA35FFC
{
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_0; // 0x10
	::RPG::GameCore::ModifierInfectType Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::RPG::GameCore::FixPoint Field_2_4; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x39
};
