#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_AD2807A9D5D50E64_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9C45E0)

inline static constexpr unsigned int Struct_2_AD2807A9D5D50E64_TypeDefinitionIndex = 83916;

struct alignas(8) Struct_2_AD2807A9D5D50E64
{
	::Il2CppArray<::System::UInt32>* Field_2_0; // 0x10

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD2807A9D5D50E64_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
