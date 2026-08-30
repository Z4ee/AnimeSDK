#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceOrPredicateConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_549217F30703E404_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x16234980)
#define CLASS_3_549217F30703E404_METHOD_3_B63D2F97090B24BF_OFFSET UNITYSDK_OFFSET(0x16234800)
#define CLASS_3_549217F30703E404__CTOR_OFFSET UNITYSDK_OFFSET(0x16234900)

inline static constexpr unsigned int Class_3_549217F30703E404_TypeDefinitionIndex = 36724;

class Class_3_549217F30703E404 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceOrPredicateConfig*>
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_19*>* HBIMCDKJMMG; // 0x20

	::System::Void _ctor(::RPG::GameCore::CakeRaceOrPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceOrPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_549217F30703E404__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_549217F30703E404* Method_3_B63D2F97090B24BF(::RPG::GameCore::CakeRaceOrPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_549217F30703E404*(*)(::RPG::GameCore::CakeRaceOrPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_549217F30703E404_METHOD_3_B63D2F97090B24BF_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_549217F30703E404_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
