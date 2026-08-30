#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionAddBuff; }

#define CLASS_2_FF00C25A036F4C15_METHOD_2_76FB642B38F7C442_OFFSET UNITYSDK_OFFSET(0x1C0971A0)
#define CLASS_2_FF00C25A036F4C15__CTOR_OFFSET UNITYSDK_OFFSET(0x1C097190)

inline static constexpr unsigned int Class_2_FF00C25A036F4C15_TypeDefinitionIndex = 36689;

class Class_2_FF00C25A036F4C15 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionAddBuff* LEIJDAMHJPH; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionAddBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionAddBuff*))((::PBYTE)hIl2Cpp + CLASS_2_FF00C25A036F4C15__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_76FB642B38F7C442(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FF00C25A036F4C15_METHOD_2_76FB642B38F7C442_OFFSET))(this, a1, a2, a3);
	}
};
