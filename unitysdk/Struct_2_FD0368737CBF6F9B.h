#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FD0368737CBF6F9B_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x90E7B0)
#define STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_TypeDefinitionIndex = 88447;

struct alignas(4) Struct_2_FD0368737CBF6F9B
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}
};
