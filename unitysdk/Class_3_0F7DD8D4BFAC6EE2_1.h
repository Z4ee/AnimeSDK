#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_D17272E82AE804C2_799;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_1_METHOD_3_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x12125140)
#define CLASS_3_0F7DD8D4BFAC6EE2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12125130)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_1_TypeDefinitionIndex = 61807;

class Class_3_0F7DD8D4BFAC6EE2_1 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_D17272E82AE804C2_799* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_D17272E82AE804C2_799* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_D17272E82AE804C2_799*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_676E831338583C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_1_METHOD_3_676E831338583C9D_OFFSET))(this);
	}
};
