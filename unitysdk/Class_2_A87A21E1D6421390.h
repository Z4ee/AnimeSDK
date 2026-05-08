#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A87A21E1D6421390__CTOR_OFFSET UNITYSDK_OFFSET(0x1B297AC0)

inline static constexpr unsigned int Class_2_A87A21E1D6421390_TypeDefinitionIndex = 83995;

class Class_2_A87A21E1D6421390 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::Struct_2_E614D3B245F96744>* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A87A21E1D6421390__CTOR_OFFSET))(this);
	}
};
