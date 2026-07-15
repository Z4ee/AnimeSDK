#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_7BF8FDF00F218876_22;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_5_METHOD_3_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x16246AD0)
#define CLASS_3_386A96AF65D538DB_5__CTOR_OFFSET UNITYSDK_OFFSET(0x16246AC0)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_5_TypeDefinitionIndex = 64102;

class Class_3_386A96AF65D538DB_5 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_7BF8FDF00F218876_22* Field_3_0; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_7BF8FDF00F218876_22* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_7BF8FDF00F218876_22*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_5__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_5_METHOD_3_DD784213055292FB_OFFSET))(this);
	}
};
