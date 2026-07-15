#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CF025126BE358084.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_2363FCAC272B4C45_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x3938590)
#define STRUCT_2_2363FCAC272B4C45_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x3938580)
#define STRUCT_2_2363FCAC272B4C45_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x3938570)
#define STRUCT_2_2363FCAC272B4C45__CTOR_OFFSET UNITYSDK_OFFSET(0x39384B0)

inline static constexpr unsigned int Struct_2_2363FCAC272B4C45_TypeDefinitionIndex = 70155;

struct alignas(8) Struct_2_2363FCAC272B4C45
{
	::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_CF025126BE358084>* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Boolean Field_2_3; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2363FCAC272B4C45__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2363FCAC272B4C45_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2363FCAC272B4C45_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2363FCAC272B4C45_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
