#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_B679E4D914A10080_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7F2300)
#define STRUCT_2_B679E4D914A10080_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x7F2290)
#define STRUCT_2_B679E4D914A10080_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F2310)
#define STRUCT_2_B679E4D914A10080_2_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7F2450)
#define STRUCT_2_B679E4D914A10080_2_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x7F23E0)
#define STRUCT_2_B679E4D914A10080_2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7F2370)
#define STRUCT_2_B679E4D914A10080_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7F2360)

inline static constexpr unsigned int Struct_2_B679E4D914A10080_2_TypeDefinitionIndex = 70368;

struct alignas(4) Struct_2_B679E4D914A10080_2
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	::System::Boolean Equals(::Struct_2_B679E4D914A10080_2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B679E4D914A10080_2))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_TOSTRING_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_2_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
