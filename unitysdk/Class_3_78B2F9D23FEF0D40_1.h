#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }

#define CLASS_3_78B2F9D23FEF0D40_1_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C0FB7A0)
#define CLASS_3_78B2F9D23FEF0D40_1_METHOD_3_AE32161807250722_OFFSET UNITYSDK_OFFSET(0x1C0FB6F0)
#define CLASS_3_78B2F9D23FEF0D40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FB780)

inline static constexpr unsigned int Class_3_78B2F9D23FEF0D40_1_TypeDefinitionIndex = 36729;

class Class_3_78B2F9D23FEF0D40_1 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceBasePredicateConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_78B2F9D23FEF0D40_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_78B2F9D23FEF0D40_1* Method_3_AE32161807250722(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_78B2F9D23FEF0D40_1*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_78B2F9D23FEF0D40_1_METHOD_3_AE32161807250722_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_78B2F9D23FEF0D40_1_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
