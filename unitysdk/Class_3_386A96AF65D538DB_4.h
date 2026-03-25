#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_58C02EFC41D1F04D_19;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_4_METHOD_3_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x8D6FAB0)
#define CLASS_3_386A96AF65D538DB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6FAA0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_4_TypeDefinitionIndex = 54613;

class Class_3_386A96AF65D538DB_4 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_58C02EFC41D1F04D_19* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_58C02EFC41D1F04D_19* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_58C02EFC41D1F04D_19*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_4_METHOD_3_102A1038C38883F3_OFFSET))(this);
	}
};
