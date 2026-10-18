#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_D17272E82AE804C2_972;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_2_METHOD_3_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xBD91110)
#define CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBD91100)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_2_TypeDefinitionIndex = 67094;

class Class_3_386A96AF65D538DB_2 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_D17272E82AE804C2_972* LEEMNOCGBOJ; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_D17272E82AE804C2_972* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_D17272E82AE804C2_972*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2_METHOD_3_A3C36642AA77866E_OFFSET))(this);
	}
};
