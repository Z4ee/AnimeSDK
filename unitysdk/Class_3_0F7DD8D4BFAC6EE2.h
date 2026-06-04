#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B9D6628E5930AA50.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_00BAB2C33D444F88_24;
namespace RPG::Client { class RogueTournPersonaStyleInfo; }

#define CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0xD7EAED0)
#define CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EAEC0)

inline static constexpr unsigned int Class_3_0F7DD8D4BFAC6EE2_TypeDefinitionIndex = 62739;

class Class_3_0F7DD8D4BFAC6EE2 : public ::Class_2_B9D6628E5930AA50
{
public:
	::Class_1_00BAB2C33D444F88_24* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournPersonaStyleInfo* a2, ::Class_1_00BAB2C33D444F88_24* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournPersonaStyleInfo*, ::Class_1_00BAB2C33D444F88_24*))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F7DD8D4BFAC6EE2_METHOD_3_96A53A17AC5D0E93_OFFSET))(this);
	}
};
