#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsMultiTargetCustomTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DDAA5F41F934CF8A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x109556E0)
#define CLASS_3_DDAA5F41F934CF8A__CTOR_OFFSET UNITYSDK_OFFSET(0x109556B0)

inline static constexpr unsigned int Class_3_DDAA5F41F934CF8A_TypeDefinitionIndex = 43944;

class Class_3_DDAA5F41F934CF8A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsMultiTargetCustomTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_3_DDAA5F41F934CF8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDAA5F41F934CF8A_EVALUATE_OFFSET))(this);
	}
};
