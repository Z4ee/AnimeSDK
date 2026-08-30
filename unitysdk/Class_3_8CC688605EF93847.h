#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class BySkillPointActivated; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8CC688605EF93847_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB615480)
#define CLASS_3_8CC688605EF93847__CTOR_OFFSET UNITYSDK_OFFSET(0xB615450)

inline static constexpr unsigned int Class_3_8CC688605EF93847_TypeDefinitionIndex = 54925;

class Class_3_8CC688605EF93847 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::BySkillPointActivated*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BySkillPointActivated* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BySkillPointActivated*))((::PBYTE)hIl2Cpp + CLASS_3_8CC688605EF93847__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8CC688605EF93847_EVALUATE_OFFSET))(this);
	}
};
