#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_242BFB9DE152D766_81;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_2_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x16315CB0)
#define CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16315CA0)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_2_TypeDefinitionIndex = 67080;

class Class_3_561E24C45FF65DCB_2 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_242BFB9DE152D766_81* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_242BFB9DE152D766_81* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueFormulaInfo*, ::Class_1_242BFB9DE152D766_81*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}
};
