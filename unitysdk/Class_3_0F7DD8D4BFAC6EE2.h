#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_E85FDBE62E39A5EA_22;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x8AD1C20)
#define CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD1C10)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_TypeDefinitionIndex = 54618;

class Class_3_0F7DD8D4BFAC6EE2 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_E85FDBE62E39A5EA_22* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_E85FDBE62E39A5EA_22* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_E85FDBE62E39A5EA_22*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_96A53A17AC5D0E93_OFFSET))(this);
	}
};
