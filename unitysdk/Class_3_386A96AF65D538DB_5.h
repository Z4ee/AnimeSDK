#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_C4B679728AD83B32_7;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_5_METHOD_3_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x13C8C540)
#define CLASS_3_386A96AF65D538DB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8C530)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_5_TypeDefinitionIndex = 62735;

class Class_3_386A96AF65D538DB_5 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_C4B679728AD83B32_7* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_C4B679728AD83B32_7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_C4B679728AD83B32_7*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_5_METHOD_3_4D2A473556700CDC_OFFSET))(this);
	}
};
