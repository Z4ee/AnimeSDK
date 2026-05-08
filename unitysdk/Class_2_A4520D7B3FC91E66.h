#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_3_AA6DF3A878195D3F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_A4520D7B3FC91E66_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11593890)
#define CLASS_2_A4520D7B3FC91E66_METHOD_2_F96471D410E66F48_OFFSET UNITYSDK_OFFSET(0x115938E0)
#define CLASS_2_A4520D7B3FC91E66__CTOR_OFFSET UNITYSDK_OFFSET(0x115937B0)

inline static constexpr unsigned int Class_2_A4520D7B3FC91E66_TypeDefinitionIndex = 77892;

class Class_2_A4520D7B3FC91E66 : public ::Class_1_5AA2BE468EDCE452
{
public:
	::Class_3_AA6DF3A878195D3F* Field_2_8; // 0x40
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_3; // 0x4C
	::System::Single Field_2_7; // 0x50
	::System::Single Field_2_4; // 0x54
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_1; // 0x5C
	::System::Single Field_2_2; // 0x60
	::System::Single Field_2_0; // 0x64

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A4520D7B3FC91E66__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4520D7B3FC91E66_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F96471D410E66F48(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_A4520D7B3FC91E66_METHOD_2_F96471D410E66F48_OFFSET))(this, a1);
	}
};
