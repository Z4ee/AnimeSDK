#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0x3AB62B0)
#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_B31AD72F99F92A8B_OFFSET UNITYSDK_OFFSET(0x3AB63B0)
#define STRUCT_2_E8C1B530F552FEF0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AB6340)
#define STRUCT_2_E8C1B530F552FEF0__CTOR_OFFSET UNITYSDK_OFFSET(0x3AB6300)

inline static constexpr unsigned int Struct_2_E8C1B530F552FEF0_TypeDefinitionIndex = 73945;

struct alignas(8) Struct_2_E8C1B530F552FEF0
{
	::System::Int32 HCDEOKNIGKG; // 0x10
	::System::Double NKAACMGNNPK; // 0x18
	::System::Double EFNAJMADAHM; // 0x20
	::System::Double HCELABHKPJD; // 0x28
	::System::Int32 GLEBPCFAPMP; // 0x30
	::System::Int32 COCBDJEDAJM; // 0x34
	::System::Int32 GOKAENLDALA; // 0x38
	::System::Int32 EFAFKFONJHP; // 0x3C
	::System::Int32 CLPNGEGJBBE; // 0x40
	::System::Int32 CJLLPFOCFFB; // 0x44
	::System::Int32 NGNKBNOADPG; // 0x48
	::System::Int32 JCJDJNEDOFB; // 0x4C
	::System::Int32 PHBJAEBBCCL; // 0x50
	::System::Int32 DBBHPLODDKK; // 0x54

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Double Method_2_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_284A00008B880FD6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B31AD72F99F92A8B(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_E8C1B530F552FEF0_METHOD_2_B31AD72F99F92A8B_OFFSET))(this, a1);
	}
};
