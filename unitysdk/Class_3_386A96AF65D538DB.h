#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_355A2207C3B7A99D_80;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_METHOD_3_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x12ABF970)
#define CLASS_3_386A96AF65D538DB__CTOR_OFFSET UNITYSDK_OFFSET(0x12ABF960)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_TypeDefinitionIndex = 61797;

class Class_3_386A96AF65D538DB : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_355A2207C3B7A99D_80* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_355A2207C3B7A99D_80* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_355A2207C3B7A99D_80*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_METHOD_3_99D60EF23C904C6D_OFFSET))(this);
	}
};
