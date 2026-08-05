#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_150.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_5.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0A7B49A6EE3DED4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CD8A0)

inline static constexpr unsigned int Class_2_0A7B49A6EE3DED4F_TypeDefinitionIndex = 92072;

class Class_2_0A7B49A6EE3DED4F : public ::Class_1_43BD383C98B4C0C5_150
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_5; // 0x10
	::Il2CppArray<::Struct_2_A725E4562D03EA4E_5>* Field_2_0; // 0x18
	::System::Int32 Field_2_6; // 0x20
	::System::Int32 Field_2_7; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A7B49A6EE3DED4F__CTOR_OFFSET))(this);
	}
};
