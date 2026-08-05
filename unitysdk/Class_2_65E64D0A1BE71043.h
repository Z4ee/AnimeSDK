#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D33A7AE9308D51C5.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_707412604A129938;
class Class_3_AA6DF3A878195D3F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_65E64D0A1BE71043_METHOD_2_873F1544B247CA21_OFFSET UNITYSDK_OFFSET(0x16B0AEB0)
#define CLASS_2_65E64D0A1BE71043_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16B0AE60)
#define CLASS_2_65E64D0A1BE71043__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0AC10)

inline static constexpr unsigned int Class_2_65E64D0A1BE71043_TypeDefinitionIndex = 61574;

class Class_2_65E64D0A1BE71043 : public ::Class_1_D33A7AE9308D51C5
{
public:
	::Class_3_AA6DF3A878195D3F* Field_2_0; // 0x40
	::Class_3_707412604A129938* Field_2_7; // 0x48
	::Class_2_F8EB4D9464ADCCA1* Field_2_6; // 0x50
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_3; // 0x5C
	::System::Single Field_2_2; // 0x60
	::System::Single Field_2_1; // 0x64

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_873F1544B247CA21(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_METHOD_2_873F1544B247CA21_OFFSET))(this, a1);
	}
};
