#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionSpawnAbility; }

#define CLASS_2_F4F8349B5BC5E87A_METHOD_2_21A361F9148F7AD8_OFFSET UNITYSDK_OFFSET(0x166451B0)
#define CLASS_2_F4F8349B5BC5E87A__CTOR_OFFSET UNITYSDK_OFFSET(0x166451A0)

inline static constexpr unsigned int Class_2_F4F8349B5BC5E87A_TypeDefinitionIndex = 29026;

class Class_2_F4F8349B5BC5E87A : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionSpawnAbility* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAbility* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAbility*))((::PBYTE)hIl2Cpp + CLASS_2_F4F8349B5BC5E87A__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_21A361F9148F7AD8(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F4F8349B5BC5E87A_METHOD_2_21A361F9148F7AD8_OFFSET))(this, a1, a2, a3);
	}
};
