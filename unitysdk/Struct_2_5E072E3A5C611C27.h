#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WeaknessStackOperationType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int Struct_2_5E072E3A5C611C27_TypeDefinitionIndex = 53302;

struct alignas(8) Struct_2_5E072E3A5C611C27
{
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_0; // 0x10
	::RPG::GameCore::WeaknessStackOperationType Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
};
