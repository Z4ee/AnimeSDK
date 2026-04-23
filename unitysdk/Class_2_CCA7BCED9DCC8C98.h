#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionOverrideBaseWaitTime; }

#define CLASS_2_CCA7BCED9DCC8C98_METHOD_2_28135C4E1CF36226_OFFSET UNITYSDK_OFFSET(0x17D14DC0)
#define CLASS_2_CCA7BCED9DCC8C98__CTOR_OFFSET UNITYSDK_OFFSET(0x17D14DB0)

inline static constexpr unsigned int Class_2_CCA7BCED9DCC8C98_TypeDefinitionIndex = 34777;

class Class_2_CCA7BCED9DCC8C98 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionOverrideBaseWaitTime*))((::PBYTE)hIl2Cpp + CLASS_2_CCA7BCED9DCC8C98__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_28135C4E1CF36226(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CCA7BCED9DCC8C98_METHOD_2_28135C4E1CF36226_OFFSET))(this, a1, a2, a3);
	}
};
