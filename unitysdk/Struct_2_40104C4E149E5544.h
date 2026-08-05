#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_40104C4E149E5544_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C6940)
#define STRUCT_2_40104C4E149E5544_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C68F0)
#define STRUCT_2_40104C4E149E5544_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C69D0)
#define STRUCT_2_40104C4E149E5544_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9C6A80)
#define STRUCT_2_40104C4E149E5544_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9C6A20)

inline static constexpr unsigned int Struct_2_40104C4E149E5544_TypeDefinitionIndex = 92008;

struct alignas(1) Struct_2_40104C4E149E5544
{
	::System::Boolean Equals(::Struct_2_40104C4E149E5544 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_40104C4E149E5544))((::PBYTE)hIl2Cpp + STRUCT_2_40104C4E149E5544_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_40104C4E149E5544_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40104C4E149E5544_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40104C4E149E5544_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_40104C4E149E5544_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
