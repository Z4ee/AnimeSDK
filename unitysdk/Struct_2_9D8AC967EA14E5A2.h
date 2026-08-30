#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3F5064ADB89DA8D3;

#define STRUCT_2_9D8AC967EA14E5A2_METHOD_2_1F8314262457963A_OFFSET UNITYSDK_OFFSET(0x3B75330)
#define STRUCT_2_9D8AC967EA14E5A2__CTOR_OFFSET UNITYSDK_OFFSET(0x85620)

inline static constexpr unsigned int Struct_2_9D8AC967EA14E5A2_TypeDefinitionIndex = 36260;

struct alignas(8) Struct_2_9D8AC967EA14E5A2
{
	::System::UInt64 ONIGBGONALF; // 0x10
	::System::UInt32 FDKPCNBCGEG; // 0x18
	::Class_1_3F5064ADB89DA8D3* JKIHOLAKJFC; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::System::UInt32 a2, ::Class_1_3F5064ADB89DA8D3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Class_1_3F5064ADB89DA8D3*))((::PBYTE)hIl2Cpp + STRUCT_2_9D8AC967EA14E5A2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	/*
	::Struct_2_FE916A7725FF5C18 Method_2_1F8314262457963A()
	{
		return ((::Struct_2_FE916A7725FF5C18(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9D8AC967EA14E5A2_METHOD_2_1F8314262457963A_OFFSET))(this);
	}
	*/
};
