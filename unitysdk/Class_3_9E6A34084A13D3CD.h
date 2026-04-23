#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_446CEB164972A00D.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_D17272E82AE804C2_797;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_3_9E6A34084A13D3CD_METHOD_3_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x11D77580)
#define CLASS_3_9E6A34084A13D3CD__CTOR_OFFSET UNITYSDK_OFFSET(0x11D77570)

inline static constexpr unsigned int Class_3_9E6A34084A13D3CD_TypeDefinitionIndex = 61825;

class Class_3_9E6A34084A13D3CD : public ::Class_2_446CEB164972A00D
{
public:
	::Class_1_D17272E82AE804C2_797* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::Class_1_D17272E82AE804C2_797* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournTitanBlessInfo*, ::Class_1_D17272E82AE804C2_797*))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_METHOD_3_460F8AE6EF9687FD_OFFSET))(this);
	}
};
