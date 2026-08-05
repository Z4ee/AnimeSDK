#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D8D569AB63B7BA26_METHOD_2_0F19B121F0DF9BAE_OFFSET UNITYSDK_OFFSET(0x86B5A0)
#define STRUCT_2_D8D569AB63B7BA26_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_D8D569AB63B7BA26__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_D8D569AB63B7BA26_TypeDefinitionIndex = 78646;

struct alignas(4) Struct_2_D8D569AB63B7BA26
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D8D569AB63B7BA26__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D8D569AB63B7BA26_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_0F19B121F0DF9BAE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D8D569AB63B7BA26_METHOD_2_0F19B121F0DF9BAE_OFFSET))(this, a1, a2);
	}
};
