#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_D17272E82AE804C2_795;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_3_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x9BCB4E0)
#define CLASS_3_3999F0765FECF6E3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCB4D0)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_3_TypeDefinitionIndex = 61810;

class Class_3_3999F0765FECF6E3_3 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_D17272E82AE804C2_795* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_D17272E82AE804C2_795* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_D17272E82AE804C2_795*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_3_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
