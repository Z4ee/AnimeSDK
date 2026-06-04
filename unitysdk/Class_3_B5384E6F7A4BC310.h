#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_1_3E663F02593BDAF0;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceCheckAndSaveTargetsPredicateConfig; }

#define CLASS_3_B5384E6F7A4BC310_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x189DFA60)
#define CLASS_3_B5384E6F7A4BC310_METHOD_3_6D4B878302A2C58E_OFFSET UNITYSDK_OFFSET(0x189DF9B0)
#define CLASS_3_B5384E6F7A4BC310__CTOR_OFFSET UNITYSDK_OFFSET(0x189DFA40)

inline static constexpr unsigned int Class_3_B5384E6F7A4BC310_TypeDefinitionIndex = 35088;

class Class_3_B5384E6F7A4BC310 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*>
{
public:
	::Class_1_3E663F02593BDAF0* Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_B5384E6F7A4BC310__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_B5384E6F7A4BC310* Method_3_6D4B878302A2C58E(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_B5384E6F7A4BC310*(*)(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_B5384E6F7A4BC310_METHOD_3_6D4B878302A2C58E_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_B5384E6F7A4BC310_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
