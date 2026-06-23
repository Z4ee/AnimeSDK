#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_1_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x144294E0)
#define STRUCT_2_6CC2897B74C41026_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_1_TypeDefinitionIndex = 56078;

struct alignas(4) Struct_2_6CC2897B74C41026_1
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_1__CTOR_OFFSET))(this, a1);
	}

	static ::Struct_2_6CC2897B74C41026_1 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_6CC2897B74C41026_1(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_1_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};
