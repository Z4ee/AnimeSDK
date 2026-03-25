#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHasActiveUnitOnScepter; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D98BDD02810F55A_EVALUATE_OFFSET UNITYSDK_OFFSET(0x8D6C3F0)
#define CLASS_3_4D98BDD02810F55A__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6C3C0)

inline static constexpr unsigned int Class_3_4D98BDD02810F55A_TypeDefinitionIndex = 43936;

class Class_3_4D98BDD02810F55A : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHasActiveUnitOnScepter*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + CLASS_3_4D98BDD02810F55A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D98BDD02810F55A_EVALUATE_OFFSET))(this);
	}
};
