#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_EQUALS_OFFSET UNITYSDK_OFFSET(0x38F2130)
#define CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38F2140)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7_TypeDefinitionIndex = 67526;

struct alignas(4) Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_STRUCT_2_09F187266BCD97E7_GETHASHCODE_OFFSET))(this);
	}
};
