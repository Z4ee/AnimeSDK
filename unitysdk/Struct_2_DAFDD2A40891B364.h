#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0653B4DCF7808BED;
class Class_1_C52B777DA7BDC594;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_DAFDD2A40891B364_METHOD_2_C3A3501FA0A6A2D0_OFFSET UNITYSDK_OFFSET(0x175DBE00)

inline static constexpr unsigned int Struct_2_DAFDD2A40891B364_TypeDefinitionIndex = 51610;

struct alignas(8) Struct_2_DAFDD2A40891B364
{
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>>* Field_2_2; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_C52B777DA7BDC594*>>* Field_2_0; // 0x20

	static ::Struct_2_DAFDD2A40891B364 Method_2_C3A3501FA0A6A2D0()
	{
		return ((::Struct_2_DAFDD2A40891B364(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DAFDD2A40891B364_METHOD_2_C3A3501FA0A6A2D0_OFFSET))();
	}
};
