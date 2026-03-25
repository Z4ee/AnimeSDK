#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F7D3BAFD8C03B69.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_2_A92A6B936EC97151__CTOR_OFFSET UNITYSDK_OFFSET(0x8C8EA20)

inline static constexpr unsigned int Class_2_A92A6B936EC97151_TypeDefinitionIndex = 54615;

class Class_2_A92A6B936EC97151 : public ::Class_1_8F7D3BAFD8C03B69
{
public:
	::RPG::Client::RogueTournPersonaRoomCardDeckInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*))((::PBYTE)hIl2Cpp + CLASS_2_A92A6B936EC97151__CTOR_OFFSET))(this, a1, a2);
	}
};
