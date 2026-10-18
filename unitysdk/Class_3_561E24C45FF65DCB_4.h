#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_0A99AF1699F7F17E_31;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_4_METHOD_3_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x154B7DD0)
#define CLASS_3_561E24C45FF65DCB_4__CTOR_OFFSET UNITYSDK_OFFSET(0x154B7DC0)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_4_TypeDefinitionIndex = 67082;

class Class_3_561E24C45FF65DCB_4 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_0A99AF1699F7F17E_31* LEEMNOCGBOJ; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_0A99AF1699F7F17E_31* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueFormulaInfo*, ::Class_1_0A99AF1699F7F17E_31*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_4__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_4_METHOD_3_B2C0ADBFEA309440_OFFSET))(this);
	}
};
