#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_6416E80FBFAF6156.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C56568358CDBA767_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBF890)

inline static constexpr unsigned int Class_2_C56568358CDBA767_1_TypeDefinitionIndex = 83558;

class Class_2_C56568358CDBA767_1 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::Struct_2_6416E80FBFAF6156>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56568358CDBA767_1__CTOR_OFFSET))(this);
	}
};
