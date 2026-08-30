#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionTriggerActionOnFight; }

#define CLASS_2_BB04F1225E263459_METHOD_2_34D4CD39E61C2246_OFFSET UNITYSDK_OFFSET(0x1C097C50)
#define CLASS_2_BB04F1225E263459__CTOR_OFFSET UNITYSDK_OFFSET(0x1C097C40)

inline static constexpr unsigned int Class_2_BB04F1225E263459_TypeDefinitionIndex = 36712;

class Class_2_BB04F1225E263459 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionTriggerActionOnFight* OINLNFFMJHH; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + CLASS_2_BB04F1225E263459__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_34D4CD39E61C2246(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BB04F1225E263459_METHOD_2_34D4CD39E61C2246_OFFSET))(this, a1, a2, a3);
	}
};
