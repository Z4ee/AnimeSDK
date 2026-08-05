#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Struct_2_7A93B32BA2E067D9_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_61ADEB26604EA166_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A4F10)

inline static constexpr unsigned int Class_2_61ADEB26604EA166_2_TypeDefinitionIndex = 93135;

class Class_2_61ADEB26604EA166_2 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Collections::Generic::List_1<::Struct_2_7A93B32BA2E067D9_1>* Field_2_7; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61ADEB26604EA166_2__CTOR_OFFSET))(this);
	}
};
