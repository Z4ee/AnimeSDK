#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Struct_2_8CB9647E1F3FB914_TypeDefinitionIndex = 55173;

struct alignas(8) Struct_2_8CB9647E1F3FB914
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::String* Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x30
	::RPG::MVector3 Field_2_6; // 0x34
	::RPG::GameCore::ModifierHitEffectStacking Field_2_7; // 0x40
	::System::Boolean Field_2_8; // 0x44
	::System::UInt32 Field_2_9; // 0x48
};
