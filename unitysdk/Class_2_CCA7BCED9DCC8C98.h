#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionOverrideBaseWaitTime; }

#define CLASS_2_CCA7BCED9DCC8C98_METHOD_2_28135C4E1CF36226_OFFSET UNITYSDK_OFFSET(0x190F4D50)
#define CLASS_2_CCA7BCED9DCC8C98__CTOR_OFFSET UNITYSDK_OFFSET(0x190D8AD0)

inline static constexpr unsigned int Class_2_CCA7BCED9DCC8C98_TypeDefinitionIndex = 35842;

class Class_2_CCA7BCED9DCC8C98 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + CLASS_2_CCA7BCED9DCC8C98__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_28135C4E1CF36226(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CCA7BCED9DCC8C98_METHOD_2_28135C4E1CF36226_OFFSET))(this, a1, a2, a3);
	}
};
