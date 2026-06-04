#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_355A2207C3B7A99D_86;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_1_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xAF8E2B0)
#define CLASS_3_386A96AF65D538DB_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8E2A0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_1_TypeDefinitionIndex = 62731;

class Class_3_386A96AF65D538DB_1 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_355A2207C3B7A99D_86* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_355A2207C3B7A99D_86* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_355A2207C3B7A99D_86*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_1_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
