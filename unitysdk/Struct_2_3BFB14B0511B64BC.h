#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x748740)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x6E8AA0)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x748750)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x3B3000)
#define STRUCT_2_3BFB14B0511B64BC__CTOR_OFFSET UNITYSDK_OFFSET(0x748710)

inline static constexpr unsigned int Struct_2_3BFB14B0511B64BC_TypeDefinitionIndex = 43318;

struct alignas(4) Struct_2_3BFB14B0511B64BC
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_5323F2DF46A044DA_3_OFFSET))(this);
	}
};
