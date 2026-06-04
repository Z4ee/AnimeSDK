#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_137AB23E3A00ECA1_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1357F0)
#define STRUCT_2_137AB23E3A00ECA1_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x135860)
#define STRUCT_2_137AB23E3A00ECA1_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1357E0)
#define STRUCT_2_137AB23E3A00ECA1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x82420)
#define STRUCT_2_137AB23E3A00ECA1_1___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x135960)
#define STRUCT_2_137AB23E3A00ECA1_1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x135900)

inline static constexpr unsigned int Struct_2_137AB23E3A00ECA1_1_TypeDefinitionIndex = 61389;

struct alignas(4) Struct_2_137AB23E3A00ECA1_1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_137AB23E3A00ECA1_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1_1))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1_1___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
