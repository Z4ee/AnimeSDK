#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

inline static constexpr unsigned int Struct_2_14D9737133301728_TypeDefinitionIndex = 53300;

struct alignas(8) Struct_2_14D9737133301728
{
	::RPG::GameCore::AbilityProperty Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_2; // 0x18
};
