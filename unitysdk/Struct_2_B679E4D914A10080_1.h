#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_B679E4D914A10080_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x888920)
#define STRUCT_2_B679E4D914A10080_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x8888A0)
#define STRUCT_2_B679E4D914A10080_1_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x888930)

inline static constexpr unsigned int Struct_2_B679E4D914A10080_1_TypeDefinitionIndex = 57373;

struct alignas(4) Struct_2_B679E4D914A10080_1
{
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14
	::System::Int32 Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x1C

	::System::Boolean Equals(::Struct_2_B679E4D914A10080_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B679E4D914A10080_1))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_B679E4D914A10080_1_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}
};
