#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_91309440AC9D4CF8_12;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_3_METHOD_3_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x17A0D660)
#define CLASS_3_386A96AF65D538DB_3__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0D650)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_3_TypeDefinitionIndex = 64100;

class Class_3_386A96AF65D538DB_3 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_91309440AC9D4CF8_12* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_91309440AC9D4CF8_12* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_91309440AC9D4CF8_12*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_3_METHOD_3_0CC4BC19C602BCD0_OFFSET))(this);
	}
};
