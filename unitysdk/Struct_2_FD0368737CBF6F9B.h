#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_FD0368737CBF6F9B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B8DE20)
#define STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET UNITYSDK_OFFSET(0x3B8DE10)

inline static constexpr unsigned int Struct_2_FD0368737CBF6F9B_TypeDefinitionIndex = 40982;

struct alignas(4) Struct_2_FD0368737CBF6F9B
{
	::System::UInt32 NEIBPPBMIKN; // 0x10
	::System::UInt32 IGDOFKLAILH; // 0x14
	::System::UInt32 AJJGKAJPPPP; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FD0368737CBF6F9B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
