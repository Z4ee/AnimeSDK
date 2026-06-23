#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F4C32234518D6B43_Struct_2_735FEFA9D3CA7225.h"
#include "unitysdk/Enum_3_AAC47DA0D7182A9F.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F4C32234518D6B43;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_B0E8F94161442A26_METHOD_2_E6FB44D7ED26A2F9_OFFSET UNITYSDK_OFFSET(0x7BEE50)
#define STRUCT_2_B0E8F94161442A26__CTOR_OFFSET UNITYSDK_OFFSET(0x7BEE30)

inline static constexpr unsigned int Struct_2_B0E8F94161442A26_TypeDefinitionIndex = 58566;

struct alignas(8) Struct_2_B0E8F94161442A26
{
	::Class_2_F4C32234518D6B43* Field_2_0; // 0x10
	::Enum_3_AAC47DA0D7182A9F Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Collections::Generic::List_1<::Class_2_F4C32234518D6B43_Struct_2_735FEFA9D3CA7225>* Field_2_3; // 0x20

	::System::Void _ctor(::Class_2_F4C32234518D6B43* a1, ::Enum_3_AAC47DA0D7182A9F a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::Class_2_F4C32234518D6B43_Struct_2_735FEFA9D3CA7225>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F4C32234518D6B43*, ::Enum_3_AAC47DA0D7182A9F, ::System::Int32, ::System::Collections::Generic::List_1<::Class_2_F4C32234518D6B43_Struct_2_735FEFA9D3CA7225>*))((::PBYTE)hIl2Cpp + STRUCT_2_B0E8F94161442A26__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_E6FB44D7ED26A2F9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B0E8F94161442A26_METHOD_2_E6FB44D7ED26A2F9_OFFSET))(this);
	}
};
