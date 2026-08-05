#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_46FE3E575CBDB25A.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2465FE796254C062_EQUALS_OFFSET UNITYSDK_OFFSET(0x69BFE0)
#define STRUCT_2_2465FE796254C062_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x69C090)

inline static constexpr unsigned int Struct_2_2465FE796254C062_TypeDefinitionIndex = 59878;

struct alignas(2) Struct_2_2465FE796254C062
{
	// static const ::System::Byte Field_2_0 = 0x0; // 0x0
	// static const ::System::Byte Field_2_7 = 0x1; // 0x0
	// static const ::System::Byte Field_2_6 = 0x2; // 0x0
	::Enum_3_46FE3E575CBDB25A Field_2_5; // 0x10
	::Enum_3_46FE3E575CBDB25A Field_2_4; // 0x12

	::System::Boolean Equals(::Struct_2_2465FE796254C062 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2465FE796254C062))((::PBYTE)hIl2Cpp + STRUCT_2_2465FE796254C062_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2465FE796254C062_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
