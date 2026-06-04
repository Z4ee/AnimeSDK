#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FD0368737CBF6F9B_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC5230)
#define STRUCT_2_FD0368737CBF6F9B_6__CTOR_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define STRUCT_2_FD0368737CBF6F9B_6___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2BC5290)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_6_TypeDefinitionIndex = 63349;

struct alignas(4) Struct_2_FD0368737CBF6F9B_6
{
	::System::UInt32 Field_2_0; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_6__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_6_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_6___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
