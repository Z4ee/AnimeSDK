#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_242BFB9DE152D766_82;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x154D84A0)
#define CLASS_3_561E24C45FF65DCB__CTOR_OFFSET UNITYSDK_OFFSET(0x154D8490)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_TypeDefinitionIndex = 67077;

class Class_3_561E24C45FF65DCB : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_242BFB9DE152D766_82* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_242BFB9DE152D766_82* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueFormulaInfo*, ::Class_1_242BFB9DE152D766_82*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
