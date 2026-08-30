#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62D6071D4141F0E4.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_752D5A5152538CB6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3AA1150)
#define STRUCT_2_752D5A5152538CB6__CTOR_OFFSET UNITYSDK_OFFSET(0x3AA1150)

inline static constexpr unsigned int Struct_2_752D5A5152538CB6_TypeDefinitionIndex = 6282;

struct alignas(4) Struct_2_752D5A5152538CB6
{
	::Struct_2_62D6071D4141F0E4 ODKBFFBBPKC; // 0x10
	::System::Single IDKONBFPBLH; // 0x44

	::System::Void _ctor(::Struct_2_62D6071D4141F0E4& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_62D6071D4141F0E4&, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_752D5A5152538CB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Struct_2_62D6071D4141F0E4 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_62D6071D4141F0E4, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_752D5A5152538CB6__CTOR_1_OFFSET))(this, a1, a2);
	}
};
