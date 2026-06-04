#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_355A2207C3B7A99D_90;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_1_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x144A1C80)
#define CLASS_3_561E24C45FF65DCB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x144A1C70)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_1_TypeDefinitionIndex = 62717;

class Class_3_561E24C45FF65DCB_1 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_355A2207C3B7A99D_90* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_355A2207C3B7A99D_90* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueFormulaInfo*, ::Class_1_355A2207C3B7A99D_90*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_1__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_1_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
