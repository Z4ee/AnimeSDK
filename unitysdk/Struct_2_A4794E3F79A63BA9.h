#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_A4794E3F79A63BA9_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x745B90)

inline static constexpr unsigned int Struct_2_A4794E3F79A63BA9_TypeDefinitionIndex = 56331;

struct alignas(4) Struct_2_A4794E3F79A63BA9
{
	static ::Struct_2_A4794E3F79A63BA9* StaticGet_Field_2_0()
	{
		return (::Struct_2_A4794E3F79A63BA9*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A4794E3F79A63BA9_TypeDefinitionIndex)->GetStaticField(0x13070);
	}
	::System::UInt32 Field_2_1; // 0x10
	::System::UInt32 Field_2_2; // 0x14
	::System::UInt32 Field_2_3; // 0x18

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A4794E3F79A63BA9_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}
};
