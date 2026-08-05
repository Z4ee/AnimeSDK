#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_0301145851E02767_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x873640)
#define STRUCT_2_0301145851E02767_EQUALS_OFFSET UNITYSDK_OFFSET(0x873630)
#define STRUCT_2_0301145851E02767_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x873720)
#define STRUCT_2_0301145851E02767_METHOD_2_0C1B215949AF2451_1_OFFSET UNITYSDK_OFFSET(0x17C71080)
#define STRUCT_2_0301145851E02767_METHOD_2_0C1B215949AF2451_OFFSET UNITYSDK_OFFSET(0x17C70E70)
#define STRUCT_2_0301145851E02767_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x8737A0)
#define STRUCT_2_0301145851E02767_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x873730)

inline static constexpr unsigned int Struct_2_0301145851E02767_TypeDefinitionIndex = 47574;

struct alignas(8) Struct_2_0301145851E02767
{
	::System::UInt32 Field_2_1; // 0x10
	::System::String* Field_2_0; // 0x18
	::System::String* Field_2_7; // 0x20

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Struct_2_0301145851E02767 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0301145851E02767))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_0C1B215949AF2451(::Struct_2_0301145851E02767 a1, ::Struct_2_0301145851E02767 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0301145851E02767, ::Struct_2_0301145851E02767))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_METHOD_2_0C1B215949AF2451_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_0C1B215949AF2451_1(::Struct_2_0301145851E02767 a1, ::Struct_2_0301145851E02767 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0301145851E02767, ::Struct_2_0301145851E02767))((::PBYTE)hIl2Cpp + STRUCT_2_0301145851E02767_METHOD_2_0C1B215949AF2451_1_OFFSET))(a1, a2);
	}
};
