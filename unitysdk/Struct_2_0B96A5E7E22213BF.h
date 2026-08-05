#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2482E9B900ABC49B.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0653B4DCF7808BED;
class Class_1_C52B777DA7BDC594;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_0B96A5E7E22213BF_METHOD_2_44E29ED07682A083_OFFSET UNITYSDK_OFFSET(0x18115920)

inline static constexpr unsigned int Struct_2_0B96A5E7E22213BF_TypeDefinitionIndex = 41160;

struct alignas(8) Struct_2_0B96A5E7E22213BF
{
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>>* Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::Class_1_0653B4DCF7808BED*>>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_4<::System::UInt32, ::Class_1_C52B777DA7BDC594*, ::Class_1_0653B4DCF7808BED*, ::Struct_2_2482E9B900ABC49B>>* Field_2_7; // 0x20

	static ::Struct_2_0B96A5E7E22213BF Method_2_44E29ED07682A083()
	{
		return ((::Struct_2_0B96A5E7E22213BF(*)())((::PBYTE)hIl2Cpp + STRUCT_2_0B96A5E7E22213BF_METHOD_2_44E29ED07682A083_OFFSET))();
	}
};
