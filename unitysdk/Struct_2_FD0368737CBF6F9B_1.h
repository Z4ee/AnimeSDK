#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FD0368737CBF6F9B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x890E0)
#define STRUCT_2_FD0368737CBF6F9B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2E950)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_1_TypeDefinitionIndex = 67213;

struct alignas(4) Struct_2_FD0368737CBF6F9B_1
{
	::System::UInt32 MNGBKJEBIGB; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_1_TOSTRING_OFFSET))(this);
	}
};
