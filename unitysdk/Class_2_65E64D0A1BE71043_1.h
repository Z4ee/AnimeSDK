#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AA2BE468EDCE452.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BAB420867AF96826;
class Class_2_F8EB4D9464ADCCA1;
class Class_3_AA6DF3A878195D3F;
class Class_3_B8F2A25A5ADF5CEE;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_7F8A2BBB0650534A_OFFSET UNITYSDK_OFFSET(0x12D47110)
#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_873F1544B247CA21_OFFSET UNITYSDK_OFFSET(0x12D468D0)
#define CLASS_2_65E64D0A1BE71043_1_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x12D46880)
#define CLASS_2_65E64D0A1BE71043_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12D46630)

inline static constexpr unsigned int Class_2_65E64D0A1BE71043_1_TypeDefinitionIndex = 84861;

class Class_2_65E64D0A1BE71043_1 : public ::Class_1_5AA2BE468EDCE452
{
public:
	::Class_3_B8F2A25A5ADF5CEE* Field_2_3; // 0x40
	::Class_2_F8EB4D9464ADCCA1* Field_2_4; // 0x48
	::Class_3_AA6DF3A878195D3F* Field_2_2; // 0x50
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_0; // 0x5C
	::System::Single Field_2_1; // 0x60

	::System::Void _ctor(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_873F1544B247CA21(::Class_1_BAB420867AF96826* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_BAB420867AF96826*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_873F1544B247CA21_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7F8A2BBB0650534A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_65E64D0A1BE71043_1_METHOD_2_7F8A2BBB0650534A_OFFSET))(this, a1);
	}
};
