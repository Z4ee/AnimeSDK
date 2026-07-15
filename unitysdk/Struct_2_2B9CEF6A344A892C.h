#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpecialBPDisplayStyle.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

inline static constexpr unsigned int Struct_2_2B9CEF6A344A892C_TypeDefinitionIndex = 54346;

struct alignas(8) Struct_2_2B9CEF6A344A892C
{
	::System::Boolean Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::RPG::GameCore::SpecialBPDisplayStyle Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::System::Int32 Field_2_5; // 0x30
	::RPG::GameCore::TurnBasedModifierInstance* Field_2_6; // 0x38
};
