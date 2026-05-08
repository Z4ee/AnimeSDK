#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_20C2DEE5ECA6BA30__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA49D0)

inline static constexpr unsigned int Class_2_20C2DEE5ECA6BA30_TypeDefinitionIndex = 83425;

class Class_2_20C2DEE5ECA6BA30 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::Struct_2_E614D3B245F96744_1 Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::System::Boolean Field_2_2; // 0x39
	::System::Boolean Field_2_6; // 0x3A
	::System::Int32 Field_2_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20C2DEE5ECA6BA30__CTOR_OFFSET))(this);
	}
};
