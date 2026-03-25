#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionRoulette; }

#define CLASS_2_1B72204E26987DD1_METHOD_2_FF4554316D21AF15_OFFSET UNITYSDK_OFFSET(0x16607280)
#define CLASS_2_1B72204E26987DD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16607270)

inline static constexpr unsigned int Class_2_1B72204E26987DD1_TypeDefinitionIndex = 29046;

class Class_2_1B72204E26987DD1 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionRoulette* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionRoulette* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionRoulette*))((::PBYTE)hIl2Cpp + CLASS_2_1B72204E26987DD1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF4554316D21AF15(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1B72204E26987DD1_METHOD_2_FF4554316D21AF15_OFFSET))(this, a1, a2, a3);
	}
};
