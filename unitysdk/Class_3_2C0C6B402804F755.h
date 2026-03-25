#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/STPredicateTask_1.h"

class Class_1_8A3C2FE068793E61;
class Class_2_3ABA989E5AECB261;
class Class_2_FBC1E64DC5B2C441;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCompareSupportCatRank; }

#define CLASS_3_2C0C6B402804F755_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1671DE60)
#define CLASS_3_2C0C6B402804F755__CTOR_OFFSET UNITYSDK_OFFSET(0x1671DD90)

inline static constexpr unsigned int Class_3_2C0C6B402804F755_TypeDefinitionIndex = 28757;

class Class_3_2C0C6B402804F755 : public ::RPG::Client::LittleGameShare::STPredicateTask_1<::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*>
{
public:
	::Class_2_FBC1E64DC5B2C441* Field_3_1; // 0x28
	::Class_2_3ABA989E5AECB261* Field_3_0; // 0x30

	::System::Void _ctor(::Class_1_8A3C2FE068793E61* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A3C2FE068793E61*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCompareSupportCatRank*))((::PBYTE)hIl2Cpp + CLASS_3_2C0C6B402804F755__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C0C6B402804F755_EVALUATE_OFFSET))(this);
	}
};
