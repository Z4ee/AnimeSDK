#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

class Class_1_355A2207C3B7A99D_84;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_2_METHOD_3_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0x11B383E0)
#define CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11B383D0)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_2_TypeDefinitionIndex = 61785;

class Class_3_561E24C45FF65DCB_2 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_355A2207C3B7A99D_84* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_355A2207C3B7A99D_84* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueFormulaInfo*, ::Class_1_355A2207C3B7A99D_84*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_930073A6194C4594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2_METHOD_3_930073A6194C4594_OFFSET))(this);
	}
};
