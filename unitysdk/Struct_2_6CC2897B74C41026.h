#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x675780)
#define STRUCT_2_6CC2897B74C41026_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x675770)
#define STRUCT_2_6CC2897B74C41026__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_TypeDefinitionIndex = 61063;

struct alignas(4) Struct_2_6CC2897B74C41026
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
