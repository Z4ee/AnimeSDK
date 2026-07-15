#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_0A99AF1699F7F17E_28;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x176F26E0)
#define CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x176F26D0)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_TypeDefinitionIndex = 64106;

class Class_3_0F7DD8D4BFAC6EE2 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_0A99AF1699F7F17E_28* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_0A99AF1699F7F17E_28* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_0A99AF1699F7F17E_28*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_6DC60149A270E0D4_OFFSET))(this);
	}
};
