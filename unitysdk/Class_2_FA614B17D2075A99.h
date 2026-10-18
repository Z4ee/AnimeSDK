#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD6736B46496BBF4.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_2_FA614B17D2075A99__CTOR_OFFSET UNITYSDK_OFFSET(0xB4575F0)

inline static constexpr unsigned int Class_2_FA614B17D2075A99_TypeDefinitionIndex = 67076;

class Class_2_FA614B17D2075A99 : public ::Class_1_CD6736B46496BBF4
{
public:
	::RPG::Client::RogueFormulaInfo* PCCPCCCFBHJ; // 0x20

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueFormulaInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + CLASS_2_FA614B17D2075A99__CTOR_OFFSET))(this, a1, a2);
	}
};
