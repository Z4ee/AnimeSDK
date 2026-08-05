#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_A3CFE8F0400B82CA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7DEDC0)
#define STRUCT_2_A3CFE8F0400B82CA_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DED00)
#define STRUCT_2_A3CFE8F0400B82CA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7DEDD0)
#define STRUCT_2_A3CFE8F0400B82CA_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7DEE30)
#define STRUCT_2_A3CFE8F0400B82CA_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7DEEA0)

inline static constexpr unsigned int Struct_2_A3CFE8F0400B82CA_TypeDefinitionIndex = 80371;

struct alignas(8) Struct_2_A3CFE8F0400B82CA
{
	::System::Int32 Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_1; // 0x18
	::System::String* Field_2_0; // 0x20

	::System::Boolean Equals(::Struct_2_A3CFE8F0400B82CA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A3CFE8F0400B82CA))((::PBYTE)hIl2Cpp + STRUCT_2_A3CFE8F0400B82CA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_A3CFE8F0400B82CA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3CFE8F0400B82CA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_A3CFE8F0400B82CA_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A3CFE8F0400B82CA_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
