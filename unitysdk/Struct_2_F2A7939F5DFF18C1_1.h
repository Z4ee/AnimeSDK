#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2A7939F5DFF18C1_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1296CAF0)

inline static constexpr unsigned int Struct_2_F2A7939F5DFF18C1_1_TypeDefinitionIndex = 49537;

struct alignas(8) Struct_2_F2A7939F5DFF18C1_1
{
	static ::System::String** StaticGet_Field_2_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F2A7939F5DFF18C1_1_TypeDefinitionIndex)->GetStaticField(0x4DF80);
	}
	::System::String* Field_2_3; // 0x10
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_1; // 0x19

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F2A7939F5DFF18C1_1__CCTOR_OFFSET))();
	}
};
