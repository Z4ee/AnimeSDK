#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_00BAB2C33D444F88_23;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_4_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xA055190)
#define CLASS_3_561E24C45FF65DCB_4__CTOR_OFFSET UNITYSDK_OFFSET(0xA055180)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_4_TypeDefinitionIndex = 61787;

class Class_3_561E24C45FF65DCB_4 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_00BAB2C33D444F88_23* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_00BAB2C33D444F88_23* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueFormulaInfo*, ::Class_1_00BAB2C33D444F88_23*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_4_METHOD_3_EC2B405D0723571D_OFFSET))(this);
	}
};
