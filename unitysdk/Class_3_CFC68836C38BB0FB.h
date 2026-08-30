#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceCoreBasePredicate_1.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceHasComponentPredicateConfig; }

#define CLASS_3_CFC68836C38BB0FB_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C1EBEF0)
#define CLASS_3_CFC68836C38BB0FB_METHOD_3_D7B6FDFCB377A159_OFFSET UNITYSDK_OFFSET(0x1C1CCD30)
#define CLASS_3_CFC68836C38BB0FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1EBED0)

inline static constexpr unsigned int Class_3_CFC68836C38BB0FB_TypeDefinitionIndex = 36726;

class Class_3_CFC68836C38BB0FB : public ::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceCoreBasePredicate_1<::RPG::GameCore::CakeRaceHasComponentPredicateConfig*>
{
public:
	::System::Void _ctor(::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceHasComponentPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_CFC68836C38BB0FB__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_3_CFC68836C38BB0FB* Method_3_D7B6FDFCB377A159(::RPG::GameCore::CakeRaceHasComponentPredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_3_CFC68836C38BB0FB*(*)(::RPG::GameCore::CakeRaceHasComponentPredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_3_CFC68836C38BB0FB_METHOD_3_D7B6FDFCB377A159_OFFSET))(a1, a2);
	}

	::System::Boolean IsMatchImpl(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_3_CFC68836C38BB0FB_ISMATCHIMPL_OFFSET))(this, a1);
	}
};
