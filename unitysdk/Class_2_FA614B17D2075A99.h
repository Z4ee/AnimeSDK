#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8F7D3BAFD8C03B69.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_1.h"

namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_2_FA614B17D2075A99__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E2510)

inline static constexpr unsigned int Class_2_FA614B17D2075A99_TypeDefinitionIndex = 54593;

class Class_2_FA614B17D2075A99 : public ::Class_1_8F7D3BAFD8C03B69
{
public:
	::RPG::Client::RogueFormulaInfo* Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_1 a1, ::RPG::Client::RogueFormulaInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_1, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + CLASS_2_FA614B17D2075A99__CTOR_OFFSET))(this, a1, a2);
	}
};
