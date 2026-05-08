#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_1_OFFSET UNITYSDK_OFFSET(0x3B0F30)
#define STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_2_OFFSET UNITYSDK_OFFSET(0x312A10)
#define STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x3AA310)
#define STRUCT_2_187E5076001B19EA__CTOR_OFFSET UNITYSDK_OFFSET(0x918E50)

inline static constexpr unsigned int Struct_2_187E5076001B19EA_TypeDefinitionIndex = 84108;

struct alignas(8) Struct_2_187E5076001B19EA
{
	::System::Double Field_2_0; // 0x10
	::System::Double Field_2_1; // 0x18
	::System::Double Field_2_2; // 0x20

	::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_187E5076001B19EA__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_2_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Double Method_2_C229FF62B898C0B2_1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_1_OFFSET))(this);
	}

	::System::Double Method_2_C229FF62B898C0B2_2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_187E5076001B19EA_METHOD_2_C229FF62B898C0B2_2_OFFSET))(this);
	}
};
