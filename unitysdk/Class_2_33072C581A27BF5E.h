#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_375.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_35.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_33072C581A27BF5E__CTOR_OFFSET UNITYSDK_OFFSET(0x157F9E00)

inline static constexpr unsigned int Class_2_33072C581A27BF5E_TypeDefinitionIndex = 15096;

class Class_2_33072C581A27BF5E : public ::Class_1_5DA2E7556103D5A3_375
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_0; // 0xB0

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_35 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_35, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_33072C581A27BF5E__CTOR_OFFSET))(this, a1, a2);
	}
};
