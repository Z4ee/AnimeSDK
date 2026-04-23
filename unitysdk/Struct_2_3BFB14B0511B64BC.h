#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_3A031B4969E41A12;

#define STRUCT_2_3BFB14B0511B64BC_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xCCB0)
#define STRUCT_2_3BFB14B0511B64BC_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xCC90)
#define STRUCT_2_3BFB14B0511B64BC_GET_X_OFFSET UNITYSDK_OFFSET(0xCC50)
#define STRUCT_2_3BFB14B0511B64BC_GET_Y_OFFSET UNITYSDK_OFFSET(0xCC70)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_1B38DDAB1EBE93B0_OFFSET UNITYSDK_OFFSET(0x15A9850)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_4C312DD4D93BCC07_OFFSET UNITYSDK_OFFSET(0x15A98E0)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x15A97B0)
#define STRUCT_2_3BFB14B0511B64BC__CTOR_OFFSET UNITYSDK_OFFSET(0x24C30)

inline static constexpr unsigned int Struct_2_3BFB14B0511B64BC_TypeDefinitionIndex = 64752;

struct alignas(4) Struct_2_3BFB14B0511B64BC
{
	::System::Single _X_k__BackingField; // 0x10
	::System::Single _Y_k__BackingField; // 0x14
	::System::Single _Width_k__BackingField; // 0x18
	::System::Single _Height_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single get_X()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_GET_X_OFFSET))(this);
	}

	::System::Single get_Y()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_GET_Y_OFFSET))(this);
	}

	::System::Single get_Width()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_GET_WIDTH_OFFSET))(this);
	}

	::System::Single get_Height()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_GET_HEIGHT_OFFSET))(this);
	}

	::System::Boolean Method_2_A99EF338505A0EA9(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1B38DDAB1EBE93B0(::Class_1_3A031B4969E41A12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3A031B4969E41A12*))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_1B38DDAB1EBE93B0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4C312DD4D93BCC07(::Struct_2_3BFB14B0511B64BC a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_4C312DD4D93BCC07_OFFSET))(this, a1);
	}
};
