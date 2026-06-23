#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_197.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_656.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_75B4267008F17806__CTOR_OFFSET UNITYSDK_OFFSET(0x1852B470)

inline static constexpr unsigned int Class_2_75B4267008F17806_TypeDefinitionIndex = 15981;

class Class_2_75B4267008F17806 : public ::Class_1_48F4A404A08692BE_197
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x38

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_656 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_656, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_75B4267008F17806__CTOR_OFFSET))(this, a1, a2);
	}
};
