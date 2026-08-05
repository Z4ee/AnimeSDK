#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_240.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_128.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FC54A78A2ED14C8_1_METHOD_2_38DE44EB72CC4AFF_OFFSET UNITYSDK_OFFSET(0x1A5C88D0)
#define CLASS_2_1FC54A78A2ED14C8_1_METHOD_2_6A05B224C77F3772_OFFSET UNITYSDK_OFFSET(0x1A5C8CA0)
#define CLASS_2_1FC54A78A2ED14C8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C88C0)

inline static constexpr unsigned int Class_2_1FC54A78A2ED14C8_1_TypeDefinitionIndex = 12455;

class Class_2_1FC54A78A2ED14C8_1 : public ::Class_1_5DA2E7556103D5A3_240
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_0; // 0x78

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_128 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_128, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_38DE44EB72CC4AFF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_1_METHOD_2_38DE44EB72CC4AFF_OFFSET))(this);
	}

	::System::Int32 Method_2_6A05B224C77F3772(::System::ReadOnlySpan_1<::System::Char> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_1_METHOD_2_6A05B224C77F3772_OFFSET))(this, a1);
	}
};
