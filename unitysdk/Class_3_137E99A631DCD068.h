#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRacePropertyComparePredicateConfig; }

#define CLASS_3_137E99A631DCD068_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C0A9C10)
#define CLASS_3_137E99A631DCD068_METHOD_3_94ECAE28B7FE4FDC_OFFSET UNITYSDK_OFFSET(0x1C0A9B60)
#define CLASS_3_137E99A631DCD068__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A9BF0)

inline static constexpr unsigned int Class_3_137E99A631DCD068_TypeDefinitionIndex = 36727;

class Class_3_137E99A631DCD068 : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRacePropertyComparePredicateConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::CakeRacePropertyComparePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRacePropertyComparePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_137E99A631DCD068__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_137E99A631DCD068* Method_3_94ECAE28B7FE4FDC(::RPG::GameCore::CakeRacePropertyComparePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_137E99A631DCD068*(*)(::RPG::GameCore::CakeRacePropertyComparePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_137E99A631DCD068_METHOD_3_94ECAE28B7FE4FDC_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_137E99A631DCD068_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
