#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_F4428E4EEF88CB9C;

#define STRUCT_2_3BFB14B0511B64BC_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xD510)
#define STRUCT_2_3BFB14B0511B64BC_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define STRUCT_2_3BFB14B0511B64BC_GET_X_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define STRUCT_2_3BFB14B0511B64BC_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_4C312DD4D93BCC07_OFFSET UNITYSDK_OFFSET(0x2DF06C0)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_7232EAA2C9CB3B3E_1_OFFSET UNITYSDK_OFFSET(0x2DF0610)
#define STRUCT_2_3BFB14B0511B64BC_METHOD_2_7232EAA2C9CB3B3E_OFFSET UNITYSDK_OFFSET(0x2DF0550)
#define STRUCT_2_3BFB14B0511B64BC__CTOR_OFFSET UNITYSDK_OFFSET(0x25B40)

inline static constexpr unsigned int Struct_2_3BFB14B0511B64BC_TypeDefinitionIndex = 70198;

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

	::System::Boolean Method_2_7232EAA2C9CB3B3E(::Class_1_F4428E4EEF88CB9C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F4428E4EEF88CB9C*))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_7232EAA2C9CB3B3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7232EAA2C9CB3B3E_1(::Class_1_F4428E4EEF88CB9C* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F4428E4EEF88CB9C*))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_7232EAA2C9CB3B3E_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4C312DD4D93BCC07(::Struct_2_3BFB14B0511B64BC a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_3BFB14B0511B64BC))((::PBYTE)hIl2Cpp + STRUCT_2_3BFB14B0511B64BC_METHOD_2_4C312DD4D93BCC07_OFFSET))(this, a1);
	}
};
