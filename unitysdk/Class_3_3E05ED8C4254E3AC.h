#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveSkillPointEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3E05ED8C4254E3AC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1237CA90)
#define CLASS_3_3E05ED8C4254E3AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1237CA60)

inline static constexpr unsigned int Class_3_3E05ED8C4254E3AC_TypeDefinitionIndex = 50404;

class Class_3_3E05ED8C4254E3AC : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveSkillPointEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveSkillPointEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveSkillPointEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3E05ED8C4254E3AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E05ED8C4254E3AC_EVALUATE_OFFSET))(this);
	}
};
