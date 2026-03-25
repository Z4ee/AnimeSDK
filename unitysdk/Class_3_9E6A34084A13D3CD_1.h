#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_446CEB164972A00D.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_FA4F4A67B1C04320_758;
namespace RPG::Client { class RogueTournTitanBlessInfo; }

#define CLASS_3_9E6A34084A13D3CD_1_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x113E6370)
#define CLASS_3_9E6A34084A13D3CD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113E6360)

inline static constexpr unsigned int Class_3_9E6A34084A13D3CD_1_TypeDefinitionIndex = 54638;

class Class_3_9E6A34084A13D3CD_1 : public ::Class_2_446CEB164972A00D
{
public:
	::Class_1_FA4F4A67B1C04320_758* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueTournTitanBlessInfo* a2, ::Class_1_FA4F4A67B1C04320_758* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueTournTitanBlessInfo*, ::Class_1_FA4F4A67B1C04320_758*))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E6A34084A13D3CD_1_METHOD_3_2ED6C3773AA1E488_OFFSET))(this);
	}
};
