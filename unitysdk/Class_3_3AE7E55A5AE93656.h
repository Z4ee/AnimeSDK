#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByAttackSkillEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3AE7E55A5AE93656_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB78E0D0)
#define CLASS_3_3AE7E55A5AE93656__CTOR_OFFSET UNITYSDK_OFFSET(0xB78E0A0)

inline static constexpr unsigned int Class_3_3AE7E55A5AE93656_TypeDefinitionIndex = 50261;

class Class_3_3AE7E55A5AE93656 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAttackSkillEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAttackSkillEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAttackSkillEffect*))((::PBYTE)hIl2Cpp + CLASS_3_3AE7E55A5AE93656__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3AE7E55A5AE93656_EVALUATE_OFFSET))(this);
	}
};
