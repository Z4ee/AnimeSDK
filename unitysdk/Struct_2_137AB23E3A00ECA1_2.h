#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_137AB23E3A00ECA1_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x39C6490)
#define STRUCT_2_137AB23E3A00ECA1_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x39C6500)
#define STRUCT_2_137AB23E3A00ECA1_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39C6480)
#define STRUCT_2_137AB23E3A00ECA1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED5C0)

inline static constexpr unsigned int Struct_2_137AB23E3A00ECA1_2_TypeDefinitionIndex = 62734;

struct alignas(4) Struct_2_137AB23E3A00ECA1_2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_137AB23E3A00ECA1_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_2))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_2_GETHASHCODE_OFFSET))(this);
	}
};
