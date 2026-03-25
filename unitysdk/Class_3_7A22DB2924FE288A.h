#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsAllLightTeamDied; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7A22DB2924FE288A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x105EADD0)
#define CLASS_3_7A22DB2924FE288A__CTOR_OFFSET UNITYSDK_OFFSET(0x105EADA0)

inline static constexpr unsigned int Class_3_7A22DB2924FE288A_TypeDefinitionIndex = 43709;

class Class_3_7A22DB2924FE288A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsAllLightTeamDied*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsAllLightTeamDied* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsAllLightTeamDied*))((::PBYTE)hIl2Cpp + CLASS_3_7A22DB2924FE288A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7A22DB2924FE288A_EVALUATE_OFFSET))(this);
	}
};
