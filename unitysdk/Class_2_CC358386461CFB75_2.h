#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CC358386461CFB75_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8EA50)

inline static constexpr unsigned int Class_2_CC358386461CFB75_2_TypeDefinitionIndex = 93179;

class Class_2_CC358386461CFB75_2 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC358386461CFB75_2__CTOR_OFFSET))(this);
	}
};
