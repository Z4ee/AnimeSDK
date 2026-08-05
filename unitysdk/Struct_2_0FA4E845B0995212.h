#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0FA4E845B0995212_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA7F650)

inline static constexpr unsigned int Struct_2_0FA4E845B0995212_TypeDefinitionIndex = 29211;

struct alignas(1) Struct_2_0FA4E845B0995212
{
	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0FA4E845B0995212_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
