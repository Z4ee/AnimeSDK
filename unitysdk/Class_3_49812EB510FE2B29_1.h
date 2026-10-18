#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8CBFD02F2AE45A55.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D_4.h"

class Class_1_D17272E82AE804C2_256;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }

#define CLASS_3_49812EB510FE2B29_1_METHOD_3_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xBE51E50)
#define CLASS_3_49812EB510FE2B29_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBE51E30)

inline static constexpr unsigned int Class_3_49812EB510FE2B29_1_TypeDefinitionIndex = 67075;

class Class_3_49812EB510FE2B29_1 : public ::Class_2_8CBFD02F2AE45A55
{
public:
	::Class_1_D17272E82AE804C2_256* LEEMNOCGBOJ; // 0x28
	::RPG::Client::RogueFormulaInfo* PCCPCCCFBHJ; // 0x30

	::System::Void _ctor(::Enum_3_63BCB6C405BA8A1D_4 a1, ::RPG::Client::RogueBuffInfo* a2, ::RPG::Client::RogueFormulaInfo* a3, ::Class_1_D17272E82AE804C2_256* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D_4, ::RPG::Client::RogueBuffInfo*, ::RPG::Client::RogueFormulaInfo*, ::Class_1_D17272E82AE804C2_256*))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_49812EB510FE2B29_1_METHOD_3_0076C796B2045359_OFFSET))(this);
	}
};
