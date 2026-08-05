#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D33A7AE9308D51C5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_3_AA6DF3A878195D3F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_A08F03C55802BDA2_METHOD_2_0B0039990C4E0A61_OFFSET UNITYSDK_OFFSET(0x165E2DC0)
#define CLASS_2_A08F03C55802BDA2_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x165E2D70)
#define CLASS_2_A08F03C55802BDA2__CTOR_OFFSET UNITYSDK_OFFSET(0x165E2C90)

inline static constexpr unsigned int Class_2_A08F03C55802BDA2_TypeDefinitionIndex = 46247;

class Class_2_A08F03C55802BDA2 : public ::Class_1_D33A7AE9308D51C5
{
public:
	::Class_3_AA6DF3A878195D3F* Field_2_11; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_4; // 0x4C
	::System::Single Field_2_3; // 0x50
	::System::Single Field_2_5; // 0x54
	::System::Single Field_2_7; // 0x58
	::System::Single Field_2_0; // 0x5C
	::System::Single Field_2_1; // 0x60
	::System::Single Field_2_2; // 0x64

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A08F03C55802BDA2__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A08F03C55802BDA2_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_0B0039990C4E0A61(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_A08F03C55802BDA2_METHOD_2_0B0039990C4E0A61_OFFSET))(this, a1);
	}
};
