#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_42.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_44.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FC54A78A2ED14C8_METHOD_2_6B3FE578166A1602_OFFSET UNITYSDK_OFFSET(0x153122B0)
#define CLASS_2_1FC54A78A2ED14C8__CTOR_OFFSET UNITYSDK_OFFSET(0x153122A0)

inline static constexpr unsigned int Class_2_1FC54A78A2ED14C8_TypeDefinitionIndex = 12650;

class Class_2_1FC54A78A2ED14C8 : public ::Class_1_5DA2E7556103D5A3_42
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_0; // 0x68

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_44 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_44, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_6B3FE578166A1602()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_METHOD_2_6B3FE578166A1602_OFFSET))(this);
	}
};
