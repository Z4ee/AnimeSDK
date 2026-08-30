#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_48.h"
#include "unitysdk/System/Object.h"

class Class_1_672ABE4AA30D53F3;

#define CLASS_1_672ABE4AA30D53F3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E996D40)
#define CLASS_1_672ABE4AA30D53F3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E996D70)
#define CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E996D80)
#define CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1E996E10)
#define CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1E996E20)

inline static constexpr unsigned int Class_1_672ABE4AA30D53F3___c_TypeDefinitionIndex = 29668;

class Class_1_672ABE4AA30D53F3___c : public ::System::Object
{
public:
	static ::Class_1_672ABE4AA30D53F3___c** StaticGet___9()
	{
		return (::Class_1_672ABE4AA30D53F3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_672ABE4AA30D53F3___c_TypeDefinitionIndex)->GetStaticField(0x365C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3___C__CTOR_OFFSET))(this);
	}

	::Class_1_672ABE4AA30D53F3* __cctor_b__28_0()
	{
		return ((::Class_1_672ABE4AA30D53F3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__28_1(::Enum_3_0A3761FE34514D6C_48 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_48))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_1_OFFSET))(this, a1);
	}

	::Enum_3_0A3761FE34514D6C_48 __cctor_b__28_2(::System::Int32 a1)
	{
		return ((::Enum_3_0A3761FE34514D6C_48(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_672ABE4AA30D53F3___C___CCTOR_B__28_2_OFFSET))(this, a1);
	}
};
