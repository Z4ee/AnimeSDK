#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_C62A9157F813660C_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x145A50)
#define STRUCT_2_C62A9157F813660C_EQUALS_OFFSET UNITYSDK_OFFSET(0x1459D0)
#define STRUCT_2_C62A9157F813660C_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x145A60)

inline static constexpr unsigned int Struct_2_C62A9157F813660C_TypeDefinitionIndex = 73709;

struct alignas(4) Struct_2_C62A9157F813660C
{
	::System::Int32 PCOMBGJBKBB; // 0x10
	::System::Int32 BIKLAFLEIOC; // 0x14
	::System::Boolean NCBLMJDAJPD; // 0x18
	::System::Boolean EBOBDAOGOPM; // 0x19
	::System::Int32 MPAJJCGFAKP; // 0x1C
	::System::Int32 NLODKEKDMOI; // 0x20

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
