#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceAndPredicateConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_378803CD0D6A03EE_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x190DE6B0)
#define CLASS_3_378803CD0D6A03EE_METHOD_3_669FC919EB6A94A1_OFFSET UNITYSDK_OFFSET(0x190DE530)
#define CLASS_3_378803CD0D6A03EE__CTOR_OFFSET UNITYSDK_OFFSET(0x190DE630)

inline static constexpr unsigned int Class_3_378803CD0D6A03EE_TypeDefinitionIndex = 35864;

class Class_3_378803CD0D6A03EE : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceAndPredicateConfig*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_19*>* Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::CakeRaceAndPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceAndPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_378803CD0D6A03EE__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_378803CD0D6A03EE* Method_3_669FC919EB6A94A1(::RPG::GameCore::CakeRaceAndPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_378803CD0D6A03EE*(*)(::RPG::GameCore::CakeRaceAndPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_378803CD0D6A03EE_METHOD_3_669FC919EB6A94A1_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_378803CD0D6A03EE_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
