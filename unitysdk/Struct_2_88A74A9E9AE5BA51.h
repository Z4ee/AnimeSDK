#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_88A74A9E9AE5BA51_METHOD_2_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x754B0)

inline static constexpr unsigned int Struct_2_88A74A9E9AE5BA51_TypeDefinitionIndex = 45797;

struct alignas(8) Struct_2_88A74A9E9AE5BA51
{
	::RPG::Client::TextID Field_2_0; // 0x10
	::RPG::Client::TextID Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x30
	::System::String* Field_2_3; // 0x38
	::System::String* Field_2_4; // 0x40
	::System::String* Field_2_5; // 0x48
	::System::String* Field_2_6; // 0x50
	::System::String* Field_2_7; // 0x58
	::System::String* Field_2_8; // 0x60
	::System::String* Field_2_9; // 0x68

	::System::Void Method_2_602A336CBD30C930(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + STRUCT_2_88A74A9E9AE5BA51_METHOD_2_602A336CBD30C930_OFFSET))(this, a1);
	}
};
