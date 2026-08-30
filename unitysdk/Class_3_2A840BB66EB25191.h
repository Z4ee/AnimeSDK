#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_D93F8AE271D8A728;
class Class_2_21AD365C113DC484;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatBehindDistance; }

#define CLASS_3_2A840BB66EB25191_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C1F6E70)
#define CLASS_3_2A840BB66EB25191__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F6D90)

inline static constexpr unsigned int Class_3_2A840BB66EB25191_TypeDefinitionIndex = 36294;

class Class_3_2A840BB66EB25191 : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*>
{
public:
	::Class_2_FBC1E64DC5B2C441* HEJHGJIGEGK; // 0x28
	::Class_2_21AD365C113DC484* MMLCJLCFEBB; // 0x30

	::System::Void _ctor(::Class_1_D93F8AE271D8A728* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D93F8AE271D8A728*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatBehindDistance*))((::PBYTE)hIl2Cpp + CLASS_3_2A840BB66EB25191__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A840BB66EB25191_EVALUATE_OFFSET))(this);
	}
};
