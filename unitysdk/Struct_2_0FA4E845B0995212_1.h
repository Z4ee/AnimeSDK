#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0FA4E845B0995212_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x935E20)

inline static constexpr unsigned int Struct_2_0FA4E845B0995212_1_TypeDefinitionIndex = 87664;

struct alignas(1) Struct_2_0FA4E845B0995212_1
{
	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FA4E845B0995212_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
