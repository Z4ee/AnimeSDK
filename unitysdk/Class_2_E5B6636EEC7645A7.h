#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_138.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E5B6636EEC7645A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA4DC0)

inline static constexpr unsigned int Class_2_E5B6636EEC7645A7_TypeDefinitionIndex = 88673;

class Class_2_E5B6636EEC7645A7 : public ::Class_1_43BD383C98B4C0C5_138
{
public:
	::Il2CppArray<::Struct_2_A725E4562D03EA4E_5>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_3; // 0x18
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5B6636EEC7645A7__CTOR_OFFSET))(this);
	}
};
