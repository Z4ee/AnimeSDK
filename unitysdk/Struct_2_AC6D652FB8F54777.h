#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_AC6D652FB8F54777_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B9D520)
#define STRUCT_2_AC6D652FB8F54777_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B9D4C0)
#define STRUCT_2_AC6D652FB8F54777_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B9D530)

inline static constexpr unsigned int Struct_2_AC6D652FB8F54777_TypeDefinitionIndex = 42471;

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
