#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceEnterStatePredicateConfig; }

#define CLASS_3_25C97950CAEA7275_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x17B89400)
#define CLASS_3_25C97950CAEA7275_METHOD_3_330715DD5E01CCA9_OFFSET UNITYSDK_OFFSET(0x17B89350)
#define CLASS_3_25C97950CAEA7275__CTOR_OFFSET UNITYSDK_OFFSET(0x17B893E0)

inline static constexpr unsigned int Class_3_25C97950CAEA7275_TypeDefinitionIndex = 35869;

class Class_3_25C97950CAEA7275 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceEnterStatePredicateConfig*>
{
public:
	::System::UInt32 Field_3_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceEnterStatePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_25C97950CAEA7275__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_25C97950CAEA7275* Method_3_330715DD5E01CCA9(::RPG::GameCore::CakeRaceEnterStatePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_25C97950CAEA7275*(*)(::RPG::GameCore::CakeRaceEnterStatePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_25C97950CAEA7275_METHOD_3_330715DD5E01CCA9_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_25C97950CAEA7275_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
