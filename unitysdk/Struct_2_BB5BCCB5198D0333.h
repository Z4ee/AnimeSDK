#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class FiveDimEffectItem; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_BB5BCCB5198D0333_TypeDefinitionIndex = 40778;

struct alignas(8) Struct_2_BB5BCCB5198D0333
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::RPG::GameCore::LittleGameEvent* Field_2_3; // 0x20
	::RPG::GameCore::LittleGameEvent* Field_2_4; // 0x28
	::RPG::GameCore::LittleGameEvent* Field_2_5; // 0x30
	::RPG::GameCore::LittleGameEvent* Field_2_6; // 0x38
	::System::String* Field_2_7; // 0x40
	::RPG::GameCore::FiveDimEffectItem* Field_2_8; // 0x48
	::System::Boolean Field_2_9; // 0x50
	::System::Boolean Field_2_10; // 0x51
};
