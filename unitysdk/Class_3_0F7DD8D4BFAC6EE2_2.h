#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_0A99AF1699F7F17E_29;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_2_METHOD_3_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x18FA2270)
#define CLASS_3_0F7DD8D4BFAC6EE2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA2260)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_2_TypeDefinitionIndex = 64112;

class Class_3_0F7DD8D4BFAC6EE2_2 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_0A99AF1699F7F17E_29* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_0A99AF1699F7F17E_29* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_0A99AF1699F7F17E_29*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_2_METHOD_3_E7EF6BC52B28648C_OFFSET))(this);
	}
};
