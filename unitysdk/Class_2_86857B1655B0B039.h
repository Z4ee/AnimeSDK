#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionTriggerActionOnFight; }

#define CLASS_2_86857B1655B0B039_METHOD_2_022B62066E30AFE3_OFFSET UNITYSDK_OFFSET(0x165EEFC0)
#define CLASS_2_86857B1655B0B039__CTOR_OFFSET UNITYSDK_OFFSET(0x165AD5C0)

inline static constexpr unsigned int Class_2_86857B1655B0B039_TypeDefinitionIndex = 29052;

class Class_2_86857B1655B0B039 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionTriggerActionOnFight* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionTriggerActionOnFight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionTriggerActionOnFight*))((::PBYTE)hIl2Cpp + CLASS_2_86857B1655B0B039__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_022B62066E30AFE3(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_86857B1655B0B039_METHOD_2_022B62066E30AFE3_OFFSET))(this, a1, a2, a3);
	}
};
