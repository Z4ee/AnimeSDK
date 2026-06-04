#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeRobinRadiusByVote; }

#define CLASS_2_42BF617BD61AFCA4_METHOD_2_0B174AF239244CF0_OFFSET UNITYSDK_OFFSET(0x18B26980)
#define CLASS_2_42BF617BD61AFCA4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B26970)

inline static constexpr unsigned int Class_2_42BF617BD61AFCA4_TypeDefinitionIndex = 35051;

class Class_2_42BF617BD61AFCA4 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeRobinRadiusByVote*))((::PBYTE)hIl2Cpp + CLASS_2_42BF617BD61AFCA4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0B174AF239244CF0(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_42BF617BD61AFCA4_METHOD_2_0B174AF239244CF0_OFFSET))(this, a1, a2, a3);
	}
};
