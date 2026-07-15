#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ST_ByInAttackDistance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B5CD5E857B9770FB_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16390A30)
#define CLASS_3_B5CD5E857B9770FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16390940)

inline static constexpr unsigned int Class_3_B5CD5E857B9770FB_TypeDefinitionIndex = 49826;

class Class_3_B5CD5E857B9770FB : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByInAttackDistance*>
{
public:
	::System::Single Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByInAttackDistance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByInAttackDistance*))((::PBYTE)hIl2Cpp + CLASS_3_B5CD5E857B9770FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B5CD5E857B9770FB_EVALUATE_OFFSET))(this);
	}
};
