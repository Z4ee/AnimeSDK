#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_3D731A5DE6C58F46;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_2_METHOD_3_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0xC77B070)
#define CLASS_3_3999F0765FECF6E3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xC77B060)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_2_TypeDefinitionIndex = 67106;

class Class_3_3999F0765FECF6E3_2 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_3D731A5DE6C58F46* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_3D731A5DE6C58F46* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_3D731A5DE6C58F46*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_2_METHOD_3_AAD21DE195D05736_OFFSET))(this);
	}
};
