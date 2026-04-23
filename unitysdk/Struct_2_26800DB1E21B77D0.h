#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class TeamData; }

inline static constexpr unsigned int Struct_2_26800DB1E21B77D0_TypeDefinitionIndex = 58128;

struct alignas(8) Struct_2_26800DB1E21B77D0
{
	::System::Boolean Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::UInt32 Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x20
	::RPG::Client::TeamData* Field_2_5; // 0x28
	::RPG::Client::TeamData* Field_2_6; // 0x30
};
