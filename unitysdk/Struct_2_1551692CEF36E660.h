#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_B84868A9FB142439.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class TaskConfig; }

inline static constexpr unsigned int Struct_2_1551692CEF36E660_TypeDefinitionIndex = 10489;

struct alignas(8) Struct_2_1551692CEF36E660
{
	::RPG::GameCore::StringHash Field_2_0; // 0x10
	::Struct_2_B84868A9FB142439 Field_2_1; // 0x18
	::RPG::GameCore::TaskConfig* Field_2_2; // 0x30
	::RPG::GameCore::DynamicFloat* Field_2_3; // 0x38
	::RPG::GameCore::DynamicFloat* Field_2_4; // 0x40
	::RPG::GameCore::PropertyAdsorptionConfig* Field_2_5; // 0x48
};
