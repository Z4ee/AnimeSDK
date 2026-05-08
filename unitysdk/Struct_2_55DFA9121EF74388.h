#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5AF87D13B3A3D31A.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_55DFA9121EF74388__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F1CF0)

inline static constexpr unsigned int Struct_2_55DFA9121EF74388_TypeDefinitionIndex = 64396;

struct alignas(8) Struct_2_55DFA9121EF74388
{
	static ::Struct_2_55DFA9121EF74388* StaticGet_Field_2_0()
	{
		return (::Struct_2_55DFA9121EF74388*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_55DFA9121EF74388_TypeDefinitionIndex)->GetStaticField(0x41180);
	}
	::Enum_3_5AF87D13B3A3D31A Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Int32 Field_2_5; // 0x28
	::System::Int32 Field_2_6; // 0x2C
	::System::Int32 Field_2_7; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_55DFA9121EF74388__CCTOR_OFFSET))();
	}
};
