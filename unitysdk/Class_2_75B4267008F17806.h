#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_32.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_121.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_75B4267008F17806__CTOR_OFFSET UNITYSDK_OFFSET(0x1A65EF10)

inline static constexpr unsigned int Class_2_75B4267008F17806_TypeDefinitionIndex = 14331;

class Class_2_75B4267008F17806 : public ::Class_1_48F4A404A08692BE_32
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_121 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_121, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_75B4267008F17806__CTOR_OFFSET))(this, a1, a2);
	}
};
