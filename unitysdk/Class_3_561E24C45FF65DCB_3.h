#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_242BFB9DE152D766_84;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_3_METHOD_3_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x13321B40)
#define CLASS_3_561E24C45FF65DCB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x13321B30)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_3_TypeDefinitionIndex = 67081;

class Class_3_561E24C45FF65DCB_3 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_242BFB9DE152D766_84* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_242BFB9DE152D766_84* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueFormulaInfo*, ::Class_1_242BFB9DE152D766_84*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_3_METHOD_3_739DB9F245C7FAD0_OFFSET))(this);
	}
};
