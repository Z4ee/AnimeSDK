#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_42F70F50178E1BCA.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D8CC61AD64FF9091_36;
namespace RPG::Client { class IRogueMiracleInfo; }

#define CLASS_3_386A96AF65D538DB_4_METHOD_3_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x1580FFA0)
#define CLASS_3_386A96AF65D538DB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1580FF90)

inline static constexpr unsigned int Class_3_386A96AF65D538DB_4_TypeDefinitionIndex = 67094;

class Class_3_386A96AF65D538DB_4 : public ::Class_2_42F70F50178E1BCA
{
public:
	::Class_1_D8CC61AD64FF9091_36* LEEMNOCGBOJ; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::IRogueMiracleInfo* a2, ::Class_1_D8CC61AD64FF9091_36* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::IRogueMiracleInfo*, ::Class_1_D8CC61AD64FF9091_36*))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_386A96AF65D538DB_4_METHOD_3_102A1038C38883F3_OFFSET))(this);
	}
};
