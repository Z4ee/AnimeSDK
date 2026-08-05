#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2A7939F5DFF18C1_4__CCTOR_OFFSET UNITYSDK_OFFSET(0x148E97D0)

inline static constexpr unsigned int Struct_2_F2A7939F5DFF18C1_4_TypeDefinitionIndex = 79932;

struct alignas(8) Struct_2_F2A7939F5DFF18C1_4
{
	static ::System::String** StaticGet_Field_2_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F2A7939F5DFF18C1_4_TypeDefinitionIndex)->GetStaticField(0x4EF10);
	}
	::System::String* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F2A7939F5DFF18C1_4__CCTOR_OFFSET))();
	}
};
