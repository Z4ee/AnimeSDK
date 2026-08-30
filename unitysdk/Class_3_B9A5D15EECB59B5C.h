#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"

class Class_1_242BFB9DE152D766_75;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_B9A5D15EECB59B5C_METHOD_3_48DDECD6769FB12B_OFFSET UNITYSDK_OFFSET(0x1848FE20)
#define CLASS_3_B9A5D15EECB59B5C_METHOD_3_C1C5AB73E443B1B4_OFFSET UNITYSDK_OFFSET(0x1848FDE0)
#define CLASS_3_B9A5D15EECB59B5C_METHOD_3_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1848FC30)
#define CLASS_3_B9A5D15EECB59B5C__CTOR_OFFSET UNITYSDK_OFFSET(0x1848FC10)

inline static constexpr unsigned int Class_3_B9A5D15EECB59B5C_TypeDefinitionIndex = 67076;

class Class_3_B9A5D15EECB59B5C : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_242BFB9DE152D766_75* LEEMNOCGBOJ; // 0x28
	::RPG::GameCore::RogueSubMode FKNBPKADNPA; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::GameCore::RogueSubMode a2, ::RPG::Client::RogueFormulaInfo* a3, ::Class_1_242BFB9DE152D766_75* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::GameCore::RogueSubMode, ::RPG::Client::RogueFormulaInfo*, ::Class_1_242BFB9DE152D766_75*))((::PBYTE)hIl2Cpp + CLASS_3_B9A5D15EECB59B5C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9A5D15EECB59B5C_METHOD_3_E3DE31A03057E055_OFFSET))(this);
	}

	static ::System::Boolean Method_3_C1C5AB73E443B1B4(::Enum_3_63BCB6C405BA8A1D_3 a1)
	{
		return ((::System::Boolean(*)(::Enum_3_63BCB6C405BA8A1D_3))((::PBYTE)hIl2Cpp + CLASS_3_B9A5D15EECB59B5C_METHOD_3_C1C5AB73E443B1B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_48DDECD6769FB12B(::RPG::GameCore::RogueSubMode a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + CLASS_3_B9A5D15EECB59B5C_METHOD_3_48DDECD6769FB12B_OFFSET))(a1);
	}
};
