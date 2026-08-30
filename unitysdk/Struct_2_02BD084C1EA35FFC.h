#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierInfectType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

inline static constexpr unsigned int Struct_2_02BD084C1EA35FFC_TypeDefinitionIndex = 54659;

struct alignas(8) Struct_2_02BD084C1EA35FFC
{
	::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x10
	::RPG::GameCore::ModifierInfectType JPGHCIIOAOC; // 0x18
	::RPG::GameCore::GameEntity* AMLKIGFLNHI; // 0x20
	::RPG::GameCore::GameEntity* AEIJCBFMHOI; // 0x28
	::RPG::GameCore::FixPoint MFGHABANPCE; // 0x30
	::System::Boolean EBFMNCJNMPF; // 0x38
	::System::Boolean MBJGAMBENFD; // 0x39
};
