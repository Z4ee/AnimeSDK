#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceGamePropertyComparePredicateConfig; }

#define CLASS_3_5F1895F9B455679B_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x15410D90)
#define CLASS_3_5F1895F9B455679B_METHOD_3_275AB8B95C1686AA_OFFSET UNITYSDK_OFFSET(0x15410CE0)
#define CLASS_3_5F1895F9B455679B__CTOR_OFFSET UNITYSDK_OFFSET(0x15410D70)

inline static constexpr unsigned int Class_3_5F1895F9B455679B_TypeDefinitionIndex = 36728;

class Class_3_5F1895F9B455679B : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_5F1895F9B455679B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_5F1895F9B455679B* Method_3_275AB8B95C1686AA(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_5F1895F9B455679B*(*)(::RPG::GameCore::CakeRaceGamePropertyComparePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_5F1895F9B455679B_METHOD_3_275AB8B95C1686AA_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_5F1895F9B455679B_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
