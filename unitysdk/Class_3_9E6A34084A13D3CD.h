#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_446CEB164972A00D.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_D17272E82AE804C2_833;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_3_9E6A34084A13D3CD_METHOD_3_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x13B37900)
#define CLASS_3_9E6A34084A13D3CD__CTOR_OFFSET UNITYSDK_OFFSET(0x13B378F0)

inline static constexpr unsigned int Class_3_9E6A34084A13D3CD_TypeDefinitionIndex = 62758;

class Class_3_9E6A34084A13D3CD : public ::Class_2_446CEB164972A00D
{
public:
	::Class_1_D17272E82AE804C2_833* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::Class_1_D17272E82AE804C2_833* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueTournTitanBlessInfo*, ::Class_1_D17272E82AE804C2_833*))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_METHOD_3_62593EE2FE331D20_OFFSET))(this);
	}
};
