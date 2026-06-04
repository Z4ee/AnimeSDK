#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_D17272E82AE804C2_810;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_2_METHOD_3_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0xAB2B7E0)
#define CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAB2B7D0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_2_TypeDefinitionIndex = 62732;

class Class_3_386A96AF65D538DB_2 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_D17272E82AE804C2_810* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_D17272E82AE804C2_810* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2_METHOD_3_A3C36642AA77866E_OFFSET))(this);
	}
};
