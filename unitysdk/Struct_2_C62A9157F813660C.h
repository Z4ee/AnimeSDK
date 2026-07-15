#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_C62A9157F813660C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x39006B0)
#define STRUCT_2_C62A9157F813660C_EQUALS_OFFSET UNITYSDK_OFFSET(0x3900630)
#define STRUCT_2_C62A9157F813660C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39006C0)

inline static constexpr unsigned int Struct_2_C62A9157F813660C_TypeDefinitionIndex = 70436;

struct alignas(4) Struct_2_C62A9157F813660C
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x19
	::System::Int32 Field_2_4; // 0x1C
	::System::Int32 Field_2_5; // 0x20

	::System::Boolean Equals(::Struct_2_C62A9157F813660C a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_C62A9157F813660C))((::PBYTE)hIl2Cpp + STRUCT_2_C62A9157F813660C_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_C62A9157F813660C_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C62A9157F813660C_GETHASHCODE_OFFSET))(this);
	}
};
