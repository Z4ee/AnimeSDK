#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31CE9F74ED7EF316_2_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3AA590)
#define STRUCT_2_31CE9F74ED7EF316_2_METHOD_2_C65CB5C998588805_OFFSET UNITYSDK_OFFSET(0x7B40F0)
#define STRUCT_2_31CE9F74ED7EF316_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7B40B0)

inline static constexpr unsigned int Struct_2_31CE9F74ED7EF316_2_TypeDefinitionIndex = 77104;

struct alignas(4) Struct_2_31CE9F74ED7EF316_2
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_31CE9F74ED7EF316_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_31CE9F74ED7EF316_2_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Double Method_2_C65CB5C998588805(::System::Single a1)
	{
		return ((::System::Double(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_31CE9F74ED7EF316_2_METHOD_2_C65CB5C998588805_OFFSET))(this, a1);
	}
};
