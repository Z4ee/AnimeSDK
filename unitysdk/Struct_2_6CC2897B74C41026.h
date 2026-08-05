#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x145506F0)
#define STRUCT_2_6CC2897B74C41026__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_TypeDefinitionIndex = 57875;

struct alignas(4) Struct_2_6CC2897B74C41026
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026__CTOR_OFFSET))(this, a1);
	}

	static ::Struct_2_6CC2897B74C41026 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_6CC2897B74C41026(*)())((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};
