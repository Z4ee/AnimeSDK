#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_926;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_2_METHOD_3_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x15082AC0)
#define CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x15082AB0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_2_TypeDefinitionIndex = 64099;

class Class_3_386A96AF65D538DB_2 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_D17272E82AE804C2_926* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_D17272E82AE804C2_926* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_D17272E82AE804C2_926*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2_METHOD_3_4D9E1AC61B60D577_OFFSET))(this);
	}
};
