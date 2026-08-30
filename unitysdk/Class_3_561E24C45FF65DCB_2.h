#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_242BFB9DE152D766_76;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_2_METHOD_3_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1612F080)
#define CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1612F070)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_2_TypeDefinitionIndex = 67078;

class Class_3_561E24C45FF65DCB_2 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_242BFB9DE152D766_76* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_242BFB9DE152D766_76* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueFormulaInfo*, ::Class_1_242BFB9DE152D766_76*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2_METHOD_3_508D4DD02D3DB74E_OFFSET))(this);
	}
};
