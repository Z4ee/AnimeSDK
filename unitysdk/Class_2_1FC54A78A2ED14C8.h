#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_102.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_434.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FC54A78A2ED14C8_METHOD_2_38DE44EB72CC4AFF_OFFSET UNITYSDK_OFFSET(0x1472A2A0)
#define CLASS_2_1FC54A78A2ED14C8_METHOD_2_6A05B224C77F3772_OFFSET UNITYSDK_OFFSET(0x1472A650)
#define CLASS_2_1FC54A78A2ED14C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1472A290)

inline static constexpr unsigned int Class_2_1FC54A78A2ED14C8_TypeDefinitionIndex = 10984;

class Class_2_1FC54A78A2ED14C8 : public ::Class_1_5DA2E7556103D5A3_102
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_434 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_434, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Method_2_38DE44EB72CC4AFF()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_METHOD_2_38DE44EB72CC4AFF_OFFSET))(this);
	}

	::System::Int32 Method_2_6A05B224C77F3772(::System::ReadOnlySpan_1<::System::Char> a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + CLASS_2_1FC54A78A2ED14C8_METHOD_2_6A05B224C77F3772_OFFSET))(this, a1);
	}
};
