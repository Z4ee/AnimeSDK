#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FA614B17D2075A99.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_2.h"

class Class_1_355A2207C3B7A99D_88;
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_561E24C45FF65DCB_2_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1433B850)
#define CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1433B840)

inline static constexpr unsigned int Class_3_561E24C45FF65DCB_2_TypeDefinitionIndex = 62718;

class Class_3_561E24C45FF65DCB_2 : public ::Class_2_FA614B17D2075A99
{
public:
	::Class_1_355A2207C3B7A99D_88* Field_3_0; // 0x28

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_2 a1, ::RPG::Client::RogueFormulaInfo* a2, ::Class_1_355A2207C3B7A99D_88* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_2, ::RPG::Client::RogueFormulaInfo*, ::Class_1_355A2207C3B7A99D_88*))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_561E24C45FF65DCB_2_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
