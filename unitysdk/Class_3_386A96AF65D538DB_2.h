#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_FA4F4A67B1C04320_735;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_2_METHOD_3_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x89A3600)
#define CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x89A35F0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_2_TypeDefinitionIndex = 54611;

class Class_3_386A96AF65D538DB_2 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_FA4F4A67B1C04320_735* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_FA4F4A67B1C04320_735* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_FA4F4A67B1C04320_735*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_2_METHOD_3_2F0F99A12DB93F30_OFFSET))(this);
	}
};
