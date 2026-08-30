#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionSpawnAbility; }

#define CLASS_2_D7BD97020389CCE4_METHOD_2_1A8FE672C458334F_OFFSET UNITYSDK_OFFSET(0x1A56A810)
#define CLASS_2_D7BD97020389CCE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1A56A800)

inline static constexpr unsigned int Class_2_D7BD97020389CCE4_TypeDefinitionIndex = 36686;

class Class_2_D7BD97020389CCE4 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionSpawnAbility* IGHAHBNLIJA; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAbility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + CLASS_2_D7BD97020389CCE4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A8FE672C458334F(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D7BD97020389CCE4_METHOD_2_1A8FE672C458334F_OFFSET))(this, a1, a2, a3);
	}
};
