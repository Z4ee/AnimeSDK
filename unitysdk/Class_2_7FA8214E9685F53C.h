#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7FA8214E9685F53C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD04A0)

inline static constexpr unsigned int Class_2_7FA8214E9685F53C_TypeDefinitionIndex = 88930;

class Class_2_7FA8214E9685F53C : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20
	::System::Int32 Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FA8214E9685F53C__CTOR_OFFSET))(this);
	}
};
