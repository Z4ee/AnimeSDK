#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasSkillTag; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EF239C4D4605270A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x14712B70)
#define CLASS_3_EF239C4D4605270A__CTOR_OFFSET UNITYSDK_OFFSET(0x14712B40)

inline static constexpr unsigned int Class_3_EF239C4D4605270A_TypeDefinitionIndex = 52145;

class Class_3_EF239C4D4605270A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasSkillTag*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSkillTag* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSkillTag*))((::PBYTE)hIl2Cpp + CLASS_3_EF239C4D4605270A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF239C4D4605270A_EVALUATE_OFFSET))(this);
	}
};
