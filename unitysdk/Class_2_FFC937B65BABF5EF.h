#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_BF6B29D18B16113B_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FFC937B65BABF5EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99DC80)

inline static constexpr unsigned int Class_2_FFC937B65BABF5EF_TypeDefinitionIndex = 89058;

class Class_2_FFC937B65BABF5EF : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::Struct_2_BF6B29D18B16113B_1>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFC937B65BABF5EF__CTOR_OFFSET))(this);
	}
};
