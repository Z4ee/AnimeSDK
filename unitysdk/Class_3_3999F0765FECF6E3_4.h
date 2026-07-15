#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_949;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16EC3280)
#define CLASS_3_3999F0765FECF6E3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC3270)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_4_TypeDefinitionIndex = 64111;

class Class_3_3999F0765FECF6E3_4 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_D17272E82AE804C2_949* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_D17272E82AE804C2_949* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_D17272E82AE804C2_949*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_4_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
