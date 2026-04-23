#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_D17272E82AE804C2_794;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_1_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xDFEA9E0)
#define CLASS_3_3999F0765FECF6E3_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDFEA9D0)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_1_TypeDefinitionIndex = 61808;

class Class_3_3999F0765FECF6E3_1 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_D17272E82AE804C2_794* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_D17272E82AE804C2_794* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_D17272E82AE804C2_794*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_1_METHOD_3_F978A1D172468895_OFFSET))(this);
	}
};
