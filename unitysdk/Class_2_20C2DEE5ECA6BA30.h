#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_20C2DEE5ECA6BA30__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDECD10)

inline static constexpr unsigned int Class_2_20C2DEE5ECA6BA30_TypeDefinitionIndex = 92909;

class Class_2_20C2DEE5ECA6BA30 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x20
	::System::Int32 Field_2_9; // 0x28
	::System::Boolean Field_2_10; // 0x2C
	::System::Boolean Field_2_6; // 0x2D
	::System::Boolean Field_2_5; // 0x2E
	::System::UInt32 Field_2_7; // 0x30
	::Struct_2_E614D3B245F96744 Field_2_4; // 0x34
	::System::Int32 Field_2_11; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20C2DEE5ECA6BA30__CTOR_OFFSET))(this);
	}
};
