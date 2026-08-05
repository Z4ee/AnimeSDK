#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A4B8DC024BB982A7.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_6A1CA20D848F2E2D_METHOD_2_34DA542281C267E6_OFFSET UNITYSDK_OFFSET(0x80F8C0)
#define STRUCT_2_6A1CA20D848F2E2D_METHOD_2_F3A2B04B04B03F1B_OFFSET UNITYSDK_OFFSET(0x80F8D0)

inline static constexpr unsigned int Struct_2_6A1CA20D848F2E2D_TypeDefinitionIndex = 83400;

struct alignas(8) Struct_2_6A1CA20D848F2E2D
{
	::System::Boolean Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_A4B8DC024BB982A7>* Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x20

	::System::Boolean Method_2_34DA542281C267E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6A1CA20D848F2E2D_METHOD_2_34DA542281C267E6_OFFSET))(this);
	}

	::System::Int64 Method_2_F3A2B04B04B03F1B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6A1CA20D848F2E2D_METHOD_2_F3A2B04B04B03F1B_OFFSET))(this);
	}
};
