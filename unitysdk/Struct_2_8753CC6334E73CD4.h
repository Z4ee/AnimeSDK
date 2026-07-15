#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_B84868A9FB142439.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

inline static constexpr unsigned int Struct_2_8753CC6334E73CD4_TypeDefinitionIndex = 10488;

struct alignas(8) Struct_2_8753CC6334E73CD4
{
	::RPG::GameCore::StringHash Field_2_0; // 0x10
	::Struct_2_B84868A9FB142439 Field_2_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_2_2; // 0x30
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x38
	::RPG::GameCore::DynamicFloat* Field_2_4; // 0x40
	::RPG::GameCore::PropertyAdsorptionConfig* Field_2_5; // 0x48
};
