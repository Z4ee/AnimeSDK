#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Struct_2_65D7BE12F72F5758_TypeDefinitionIndex = 52984;

struct alignas(8) Struct_2_65D7BE12F72F5758
{
	::System::Nullable_1<::System::Boolean> Field_2_0; // 0x10
	::System::Nullable_1<::System::Int32> Field_2_1; // 0x14
	::RPG::GameCore::EnergyBarState Field_2_2; // 0x1C
	::System::Nullable_1<::System::Int32> Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::Nullable_1<::System::Int32> Field_2_5; // 0x30
	::System::Nullable_1<::System::Int32> Field_2_6; // 0x38
	::System::Nullable_1<::System::Int32> Field_2_7; // 0x40
	::System::String* Field_2_8; // 0x48
	::Il2CppArray<::System::String*>* Field_2_9; // 0x50
	::System::Nullable_1<::System::Boolean> Field_2_10; // 0x58
};
