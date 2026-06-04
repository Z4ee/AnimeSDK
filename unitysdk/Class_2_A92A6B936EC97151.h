#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_2_A92A6B936EC97151__CTOR_OFFSET UNITYSDK_OFFSET(0xAAEA950)

inline static constexpr unsigned int Class_2_A92A6B936EC97151_TypeDefinitionIndex = 62736;

class Class_2_A92A6B936EC97151 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueTournPersonaRoomCardDeckInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*))((::PBYTE)hIl2Cpp + CLASS_2_A92A6B936EC97151__CTOR_OFFSET))(this, a1, a2);
	}
};
