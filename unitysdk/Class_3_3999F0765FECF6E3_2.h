#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A92A6B936EC97151.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_D3F3D75C45AAB16C_1;
namespace RPG::Client { class RogueTournPersonaRoomCardDeckInfo; }

#define CLASS_3_3999F0765FECF6E3_2_METHOD_3_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xB514810)
#define CLASS_3_3999F0765FECF6E3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xB514800)

inline static constexpr unsigned int Class_3_3999F0765FECF6E3_2_TypeDefinitionIndex = 62742;

class Class_3_3999F0765FECF6E3_2 : public ::Class_2_A92A6B936EC97151
{
public:
	::Class_1_D3F3D75C45AAB16C_1* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo* a2, ::Class_1_D3F3D75C45AAB16C_1* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaRoomCardDeckInfo*, ::Class_1_D3F3D75C45AAB16C_1*))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3999F0765FECF6E3_2_METHOD_3_7EAA8879197594BA_OFFSET))(this);
	}
};
