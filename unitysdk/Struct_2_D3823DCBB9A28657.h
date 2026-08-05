#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D145B9A8B879906D.h"
#include "unitysdk/Struct_2_5A3A8DC7AD728F46.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8D15428750286203;
class Class_2_208CC9941471731A_1292;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_D3823DCBB9A28657__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAB70)

inline static constexpr unsigned int Struct_2_D3823DCBB9A28657_TypeDefinitionIndex = 93660;

struct alignas(8) Struct_2_D3823DCBB9A28657
{
	::Enum_3_D145B9A8B879906D Field_2_3; // 0x10
	::System::UInt64 Field_2_2; // 0x18
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>* Field_2_0; // 0x30
	::Class_2_208CC9941471731A_1292* Field_2_7; // 0x38
	::Struct_2_5A3A8DC7AD728F46 Field_2_6; // 0x40

	::System::Void _ctor(::Enum_3_D145B9A8B879906D a1, ::System::UInt64 a2, ::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>* a3, ::Class_2_208CC9941471731A_1292* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D145B9A8B879906D, ::System::UInt64, ::System::Collections::Generic::List_1<::Class_1_8D15428750286203*>*, ::Class_2_208CC9941471731A_1292*))((::PBYTE)hIl2Cpp + STRUCT_2_D3823DCBB9A28657__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
