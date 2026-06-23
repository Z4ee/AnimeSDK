#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_20524E1B140AC181_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C5AE0)
#define STRUCT_2_20524E1B140AC181_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C5AD0)
#define STRUCT_2_20524E1B140AC181_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C5BC0)
#define STRUCT_2_20524E1B140AC181_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x9C5C30)
#define STRUCT_2_20524E1B140AC181_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x9C5BD0)
#define STRUCT_2_20524E1B140AC181__CTOR_OFFSET UNITYSDK_OFFSET(0x765CC0)

inline static constexpr unsigned int Struct_2_20524E1B140AC181_TypeDefinitionIndex = 87697;

struct alignas(4) Struct_2_20524E1B140AC181
{
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_20524E1B140AC181 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_20524E1B140AC181))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_20524E1B140AC181_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
