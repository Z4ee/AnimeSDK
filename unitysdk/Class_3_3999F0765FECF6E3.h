#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D3F3D75C45AAB16C_1;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_METHOD_3_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x1AF3FF60)
#define CLASS_3_3999F0765FECF6E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF3FF50)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_TypeDefinitionIndex = 67099;

class Class_3_3999F0765FECF6E3 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_D3F3D75C45AAB16C_1* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_D3F3D75C45AAB16C_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_D3F3D75C45AAB16C_1*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_METHOD_3_3FC863B885E15ED5_OFFSET))(this);
	}
};
