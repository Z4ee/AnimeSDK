#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_951;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_3_METHOD_3_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x140BC350)
#define CLASS_3_0F7DD8D4BFAC6EE2_3__CTOR_OFFSET UNITYSDK_OFFSET(0x140BC340)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_3_TypeDefinitionIndex = 64113;

class Class_3_0F7DD8D4BFAC6EE2_3 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_D17272E82AE804C2_951* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_D17272E82AE804C2_951* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_D17272E82AE804C2_951*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_8E9E3E0D1D6E6E24()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_3_METHOD_3_8E9E3E0D1D6E6E24_OFFSET))(this);
	}
};
