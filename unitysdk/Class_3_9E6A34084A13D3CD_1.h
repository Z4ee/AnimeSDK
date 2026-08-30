#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_446CEB164972A00D.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_3.h"

class Class_1_D17272E82AE804C2_968;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_3_9E6A34084A13D3CD_1_METHOD_3_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x19511B30)
#define CLASS_3_9E6A34084A13D3CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19511B20)

inline static constexpr unsigned int Class_3_9E6A34084A13D3CD_1_TypeDefinitionIndex = 67121;

class Class_3_9E6A34084A13D3CD_1 : public ::Class_2_446CEB164972A00D
{
public:
	::Class_1_D17272E82AE804C2_968* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_3 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::Class_1_D17272E82AE804C2_968* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_3, ::RPG::Client::RogueTournTitanBlessInfo*, ::Class_1_D17272E82AE804C2_968*))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_1_METHOD_3_2439B52C953E2E46_OFFSET))(this);
	}
};
