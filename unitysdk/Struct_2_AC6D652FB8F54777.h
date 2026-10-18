#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_AC6D652FB8F54777_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C51F90)
#define STRUCT_2_AC6D652FB8F54777_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C51F30)
#define STRUCT_2_AC6D652FB8F54777_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C51FA0)

inline static constexpr unsigned int Struct_2_AC6D652FB8F54777_TypeDefinitionIndex = 44278;

struct alignas(1) Struct_2_AC6D652FB8F54777
{
	::System::Boolean Equals(::Struct_2_AC6D652FB8F54777 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_AC6D652FB8F54777))((::PBYTE)hIl2Cpp + STRUCT_2_AC6D652FB8F54777_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_AC6D652FB8F54777_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC6D652FB8F54777_GETHASHCODE_OFFSET))(this);
	}
};
