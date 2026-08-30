#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatRank; }

#define CLASS_3_3209F104278BDD2D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1972AB60)
#define CLASS_3_3209F104278BDD2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1972AA80)

inline static constexpr unsigned int Class_3_3209F104278BDD2D_TypeDefinitionIndex = 36296;

class Class_3_3209F104278BDD2D : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*>
{
public:
	::Class_2_21AD365C113DC484* MMLCJLCFEBB; // 0x28
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + CLASS_3_3209F104278BDD2D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3209F104278BDD2D_EVALUATE_OFFSET))(this);
	}
};
