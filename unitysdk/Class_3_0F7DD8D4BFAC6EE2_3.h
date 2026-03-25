#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_FA4F4A67B1C04320_759;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_3_METHOD_3_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0xD173180)
#define CLASS_3_0F7DD8D4BFAC6EE2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xD173170)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_3_TypeDefinitionIndex = 54625;

class Class_3_0F7DD8D4BFAC6EE2_3 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_FA4F4A67B1C04320_759* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_FA4F4A67B1C04320_759* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_FA4F4A67B1C04320_759*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_3_METHOD_3_5EBCF276C230582C_OFFSET))(this);
	}
};
