#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2A7939F5DFF18C1_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x135314A0)

inline static constexpr unsigned int Struct_2_F2A7939F5DFF18C1_3_TypeDefinitionIndex = 50657;

struct alignas(8) Struct_2_F2A7939F5DFF18C1_3
{
	static ::System::String** StaticGet_Field_2_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F2A7939F5DFF18C1_3_TypeDefinitionIndex)->GetStaticField(0x342D0);
	}
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Boolean Field_2_2; // 0x19

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F2A7939F5DFF18C1_3__CCTOR_OFFSET))();
	}
};
