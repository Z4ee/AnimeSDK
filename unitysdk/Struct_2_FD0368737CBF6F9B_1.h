#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FD0368737CBF6F9B_1_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x982440)
#define STRUCT_2_FD0368737CBF6F9B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_1_TypeDefinitionIndex = 92001;

struct alignas(4) Struct_2_FD0368737CBF6F9B_1
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_1_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}
};
