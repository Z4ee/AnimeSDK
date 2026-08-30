#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCheckMechanismBarPhase; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5736518B54DD2EB_EVALUATE_OFFSET UNITYSDK_OFFSET(0xBA7EFC0)
#define CLASS_3_B5736518B54DD2EB__CTOR_OFFSET UNITYSDK_OFFSET(0xBA7EF90)

inline static constexpr unsigned int Class_3_B5736518B54DD2EB_TypeDefinitionIndex = 54712;

class Class_3_B5736518B54DD2EB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckMechanismBarPhase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + CLASS_3_B5736518B54DD2EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5736518B54DD2EB_EVALUATE_OFFSET))(this);
	}
};
