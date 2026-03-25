#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasSkillType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C460A56B2A38C6E_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11148930)
#define CLASS_3_9C460A56B2A38C6E__CTOR_OFFSET UNITYSDK_OFFSET(0x11148900)

inline static constexpr unsigned int Class_3_9C460A56B2A38C6E_TypeDefinitionIndex = 43696;

class Class_3_9C460A56B2A38C6E : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasSkillType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasSkillType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasSkillType*))((::PBYTE)hIl2Cpp + CLASS_3_9C460A56B2A38C6E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C460A56B2A38C6E_EVALUATE_OFFSET))(this);
	}
};
