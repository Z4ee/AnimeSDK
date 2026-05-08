#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Struct_2_0EA61705E6C719A1.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_5780528FADE0FF09_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1255F790)
#define CLASS_2_5780528FADE0FF09_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1255F8A0)
#define CLASS_2_5780528FADE0FF09_METHOD_2_AA93829F41DD3093_OFFSET UNITYSDK_OFFSET(0x1255FA60)
#define CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1255F9D0)
#define CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1255F930)
#define CLASS_2_5780528FADE0FF09__CCTOR_OFFSET UNITYSDK_OFFSET(0x1255F820)
#define CLASS_2_5780528FADE0FF09__CTOR_OFFSET UNITYSDK_OFFSET(0x1255F890)

inline static constexpr unsigned int Class_2_5780528FADE0FF09_TypeDefinitionIndex = 53914;

class Class_2_5780528FADE0FF09 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x78; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20
	::MoleMole::Battle::Entity* Field_2_1; // 0x28
	::Struct_2_0EA61705E6C719A1 Field_2_2; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_AA93829F41DD3093(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::Struct_2_0EA61705E6C719A1 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_0EA61705E6C719A1))((::PBYTE)hIl2Cpp + CLASS_2_5780528FADE0FF09_METHOD_2_AA93829F41DD3093_OFFSET))(this, a1, a2, a3);
	}
};
