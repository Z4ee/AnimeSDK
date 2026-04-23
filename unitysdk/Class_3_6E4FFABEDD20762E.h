#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceFrontCatNumPredicateConfig; }

#define CLASS_3_6E4FFABEDD20762E_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x17C3B440)
#define CLASS_3_6E4FFABEDD20762E_METHOD_3_BF3065FEACF63D87_OFFSET UNITYSDK_OFFSET(0x17C3B390)
#define CLASS_3_6E4FFABEDD20762E__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3B420)

inline static constexpr unsigned int Class_3_6E4FFABEDD20762E_TypeDefinitionIndex = 34806;

class Class_3_6E4FFABEDD20762E : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_6E4FFABEDD20762E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_6E4FFABEDD20762E* Method_3_BF3065FEACF63D87(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_6E4FFABEDD20762E*(*)(::RPG::GameCore::CakeRaceFrontCatNumPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_6E4FFABEDD20762E_METHOD_3_BF3065FEACF63D87_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_3ABA989E5AECB261* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_3ABA989E5AECB261*))((::PBYTE)hIl2Cpp + CLASS_3_6E4FFABEDD20762E_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
